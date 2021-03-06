/// @file
/// @author Marcus Meeßen
/// @copyright Copyright (c) 2017-2018 Marcus Meeßen
/// @copyright Copyright (c) 2018      MASKOR Institute FH Aachen

#ifndef CUTE_VR_INTERNAL_VECTOR_3
#define CUTE_VR_INTERNAL_VECTOR_3

#if defined(CUTE_VR_OPEN_VR) || defined(DOXYRUN)

#include <openvr.h>
#include <QtGui/QVector3D>

namespace CuteVR { namespace Internal {
    /// @internal@brief Conversion of three-dimensional vectors between Qt and OpenVR format.
    namespace Vector3 {
        /// @internal@brief Converts a three-dimensional vector from OpenVR to Qt format.
        inline QVector3D from(vr::HmdVector3_t const &o) {
            return {o.v[0], o.v[1], o.v[2]};
        }

        /// @internal@brief Converts a three-dimensional vector from Qt to OpenVR format.
        inline vr::HmdVector3_t from(QVector3D const &o) {
            return {{o[0], o[1], o[2]}};
        }
    }
}}

#endif // CUTE_VR_OPEN_VR

#endif // CUTE_VR_INTERNAL_VECTOR_3
