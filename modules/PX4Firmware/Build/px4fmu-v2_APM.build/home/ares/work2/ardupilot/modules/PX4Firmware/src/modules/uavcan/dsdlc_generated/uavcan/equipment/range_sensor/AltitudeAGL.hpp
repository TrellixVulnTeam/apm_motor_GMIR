/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/equipment/range_sensor/290.AltitudeAGL.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/Timestamp.hpp>

/******************************* Source text **********************************
#
# Altitude above ground level.
# A single node can publish measurements from different sensors concurrently.
#

uavcan.Timestamp timestamp

float16 altitude_agl             # +inf - too far, -inf - too close
float16 altitude_agl_variance    # +inf if too close or too far

float16 sensor_max_range
float16 sensor_min_range

uint8 SENSOR_UNKNOWN = 0
uint8 SENSOR_SONAR   = 1
uint8 SENSOR_LASER   = 2
uint8 SENSOR_RADAR   = 3
uint8 SENSOR_CV      = 4
uint8 sensor_type
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.range_sensor.AltitudeAGL
uavcan.Timestamp timestamp
saturated float16 altitude_agl
saturated float16 altitude_agl_variance
saturated float16 sensor_max_range
saturated float16 sensor_min_range
saturated uint8 sensor_type
saturated uint8 SENSOR_CV = 4
saturated uint8 SENSOR_LASER = 2
saturated uint8 SENSOR_RADAR = 3
saturated uint8 SENSOR_SONAR = 1
saturated uint8 SENSOR_UNKNOWN = 0
******************************************************************************/

#undef timestamp
#undef altitude_agl
#undef altitude_agl_variance
#undef sensor_max_range
#undef sensor_min_range
#undef sensor_type
#undef SENSOR_UNKNOWN
#undef SENSOR_SONAR
#undef SENSOR_LASER
#undef SENSOR_RADAR
#undef SENSOR_CV

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{
namespace range_sensor
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT AltitudeAGL_
{
    typedef const AltitudeAGL_<_tmpl>& ParameterType;
    typedef AltitudeAGL_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_UNKNOWN;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_SONAR;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_LASER;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_RADAR;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > SENSOR_CV;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > altitude_agl;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > altitude_agl_variance;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > sensor_max_range;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > sensor_min_range;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > sensor_type;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::altitude_agl::MinBitLen
            + FieldTypes::altitude_agl_variance::MinBitLen
            + FieldTypes::sensor_max_range::MinBitLen
            + FieldTypes::sensor_min_range::MinBitLen
            + FieldTypes::sensor_type::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::altitude_agl::MaxBitLen
            + FieldTypes::altitude_agl_variance::MaxBitLen
            + FieldTypes::sensor_max_range::MaxBitLen
            + FieldTypes::sensor_min_range::MaxBitLen
            + FieldTypes::sensor_type::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_UNKNOWN >::Type SENSOR_UNKNOWN; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_SONAR >::Type SENSOR_SONAR; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_LASER >::Type SENSOR_LASER; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_RADAR >::Type SENSOR_RADAR; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::SENSOR_CV >::Type SENSOR_CV; // 4

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::altitude_agl >::Type altitude_agl;
    typename ::uavcan::StorageType< typename FieldTypes::altitude_agl_variance >::Type altitude_agl_variance;
    typename ::uavcan::StorageType< typename FieldTypes::sensor_max_range >::Type sensor_max_range;
    typename ::uavcan::StorageType< typename FieldTypes::sensor_min_range >::Type sensor_min_range;
    typename ::uavcan::StorageType< typename FieldTypes::sensor_type >::Type sensor_type;

    AltitudeAGL_()
        : timestamp()
        , altitude_agl()
        , altitude_agl_variance()
        , sensor_max_range()
        , sensor_min_range()
        , sensor_type()
    {
        enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
        ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<120 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 290 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.range_sensor.AltitudeAGL";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool AltitudeAGL_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        altitude_agl == rhs.altitude_agl &&
        altitude_agl_variance == rhs.altitude_agl_variance &&
        sensor_max_range == rhs.sensor_max_range &&
        sensor_min_range == rhs.sensor_min_range &&
        sensor_type == rhs.sensor_type;
}

template <int _tmpl>
bool AltitudeAGL_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(altitude_agl, rhs.altitude_agl) &&
        ::uavcan::areClose(altitude_agl_variance, rhs.altitude_agl_variance) &&
        ::uavcan::areClose(sensor_max_range, rhs.sensor_max_range) &&
        ::uavcan::areClose(sensor_min_range, rhs.sensor_min_range) &&
        ::uavcan::areClose(sensor_type, rhs.sensor_type);
}

template <int _tmpl>
int AltitudeAGL_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::encode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::altitude_agl::encode(self.altitude_agl, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::altitude_agl_variance::encode(self.altitude_agl_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_max_range::encode(self.sensor_max_range, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_min_range::encode(self.sensor_min_range, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_type::encode(self.sensor_type, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int AltitudeAGL_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::decode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::altitude_agl::decode(self.altitude_agl, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::altitude_agl_variance::decode(self.altitude_agl_variance, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_max_range::decode(self.sensor_max_range, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_min_range::decode(self.sensor_min_range, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::sensor_type::decode(self.sensor_type, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature AltitudeAGL_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xE58B78F62A168739ULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::altitude_agl::extendDataTypeSignature(signature);
    FieldTypes::altitude_agl_variance::extendDataTypeSignature(signature);
    FieldTypes::sensor_max_range::extendDataTypeSignature(signature);
    FieldTypes::sensor_min_range::extendDataTypeSignature(signature);
    FieldTypes::sensor_type::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename AltitudeAGL_<_tmpl>::ConstantTypes::SENSOR_UNKNOWN >::Type
    AltitudeAGL_<_tmpl>::SENSOR_UNKNOWN = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename AltitudeAGL_<_tmpl>::ConstantTypes::SENSOR_SONAR >::Type
    AltitudeAGL_<_tmpl>::SENSOR_SONAR = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename AltitudeAGL_<_tmpl>::ConstantTypes::SENSOR_LASER >::Type
    AltitudeAGL_<_tmpl>::SENSOR_LASER = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename AltitudeAGL_<_tmpl>::ConstantTypes::SENSOR_RADAR >::Type
    AltitudeAGL_<_tmpl>::SENSOR_RADAR = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename AltitudeAGL_<_tmpl>::ConstantTypes::SENSOR_CV >::Type
    AltitudeAGL_<_tmpl>::SENSOR_CV = 4U; // 4

/*
 * Final typedef
 */
typedef AltitudeAGL_<0> AltitudeAGL;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::range_sensor::AltitudeAGL > _uavcan_gdtr_registrator_AltitudeAGL;

}

} // Namespace uavcan
} // Namespace equipment
} // Namespace range_sensor

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::range_sensor::AltitudeAGL::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL >::stream(Stream& s, ::uavcan::equipment::range_sensor::AltitudeAGL::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "timestamp: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "altitude_agl: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::altitude_agl >::stream(s, obj.altitude_agl, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "altitude_agl_variance: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::altitude_agl_variance >::stream(s, obj.altitude_agl_variance, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sensor_max_range: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::sensor_max_range >::stream(s, obj.sensor_max_range, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sensor_min_range: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::sensor_min_range >::stream(s, obj.sensor_min_range, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "sensor_type: ";
    YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL::FieldTypes::sensor_type >::stream(s, obj.sensor_type, level + 1);
}

}

namespace uavcan
{
namespace equipment
{
namespace range_sensor
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::range_sensor::AltitudeAGL::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::range_sensor::AltitudeAGL >::stream(s, obj, 0);
    return s;
}

}
}
}