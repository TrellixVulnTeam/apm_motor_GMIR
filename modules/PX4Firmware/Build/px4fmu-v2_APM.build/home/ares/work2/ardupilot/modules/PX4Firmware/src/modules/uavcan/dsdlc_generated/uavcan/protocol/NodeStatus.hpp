/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/protocol/550.NodeStatus.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Abstract node status information.
# Any UAVCAN node is required to publish this message periodically.
#

uint16 MAX_PUBLICATION_PERIOD_MS = 1000
uint16 MIN_PUBLICATION_PERIOD_MS = 20

# If a node fails to publish this message in this amount of time, it should be considered offline.
uint16 OFFLINE_TIMEOUT_MS = 3000

# Uptime counter should never overflow.
uint28 uptime_sec

# Status code should be used to reflect the node status in the most abstract way.
# Use cases: top-level onboard computer should not allow the UAV to begin normal operation
# unless all nodes report OK. If a mission critical node reports CRITICAL status, current
# mission should be immediately yet safely aborted (e.g. RTL).
# OFFLINE status can be actually reported by the node to explicitly inform other network
# participants that the sending node is about to shutdown. In this case other nodes will not
# have to wait OFFLINE_TIMEOUT_MS before they detect that the node is no longer available.
uint4 STATUS_OK           = 0
uint4 STATUS_INITIALIZING = 1
uint4 STATUS_WARNING      = 2
uint4 STATUS_CRITICAL     = 3
uint4 STATUS_OFFLINE      = 15
uint4 status_code
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.NodeStatus
saturated uint28 uptime_sec
saturated uint4 status_code
saturated uint16 MAX_PUBLICATION_PERIOD_MS = 1000
saturated uint16 MIN_PUBLICATION_PERIOD_MS = 20
saturated uint16 OFFLINE_TIMEOUT_MS = 3000
saturated uint4 STATUS_CRITICAL = 3
saturated uint4 STATUS_INITIALIZING = 1
saturated uint4 STATUS_OFFLINE = 15
saturated uint4 STATUS_OK = 0
saturated uint4 STATUS_WARNING = 2
******************************************************************************/

#undef uptime_sec
#undef status_code
#undef MAX_PUBLICATION_PERIOD_MS
#undef MIN_PUBLICATION_PERIOD_MS
#undef OFFLINE_TIMEOUT_MS
#undef STATUS_OK
#undef STATUS_INITIALIZING
#undef STATUS_WARNING
#undef STATUS_CRITICAL
#undef STATUS_OFFLINE

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT NodeStatus_
{
    typedef const NodeStatus_<_tmpl>& ParameterType;
    typedef NodeStatus_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MAX_PUBLICATION_PERIOD_MS;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MIN_PUBLICATION_PERIOD_MS;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > OFFLINE_TIMEOUT_MS;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_OK;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_INITIALIZING;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_WARNING;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_CRITICAL;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > STATUS_OFFLINE;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 28, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > uptime_sec;
        typedef ::uavcan::IntegerSpec< 4, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > status_code;
    };

    enum
    {
        MinBitLen
            = FieldTypes::uptime_sec::MinBitLen
            + FieldTypes::status_code::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::uptime_sec::MaxBitLen
            + FieldTypes::status_code::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::MAX_PUBLICATION_PERIOD_MS >::Type MAX_PUBLICATION_PERIOD_MS; // 1000
    static const typename ::uavcan::StorageType< typename ConstantTypes::MIN_PUBLICATION_PERIOD_MS >::Type MIN_PUBLICATION_PERIOD_MS; // 20
    static const typename ::uavcan::StorageType< typename ConstantTypes::OFFLINE_TIMEOUT_MS >::Type OFFLINE_TIMEOUT_MS; // 3000
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_OK >::Type STATUS_OK; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_INITIALIZING >::Type STATUS_INITIALIZING; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_WARNING >::Type STATUS_WARNING; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_CRITICAL >::Type STATUS_CRITICAL; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::STATUS_OFFLINE >::Type STATUS_OFFLINE; // 15

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::uptime_sec >::Type uptime_sec;
    typename ::uavcan::StorageType< typename FieldTypes::status_code >::Type status_code;

    NodeStatus_()
        : uptime_sec()
        , status_code()
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
        ::uavcan::StaticAssert<32 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 550 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.NodeStatus";
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
bool NodeStatus_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        uptime_sec == rhs.uptime_sec &&
        status_code == rhs.status_code;
}

template <int _tmpl>
bool NodeStatus_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(uptime_sec, rhs.uptime_sec) &&
        ::uavcan::areClose(status_code, rhs.status_code);
}

template <int _tmpl>
int NodeStatus_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::uptime_sec::encode(self.uptime_sec, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status_code::encode(self.status_code, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int NodeStatus_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::uptime_sec::decode(self.uptime_sec, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::status_code::decode(self.status_code, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature NodeStatus_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x72CF41D281C6F8D9ULL);

    FieldTypes::uptime_sec::extendDataTypeSignature(signature);
    FieldTypes::status_code::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::MAX_PUBLICATION_PERIOD_MS >::Type
    NodeStatus_<_tmpl>::MAX_PUBLICATION_PERIOD_MS = 1000U; // 1000

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::MIN_PUBLICATION_PERIOD_MS >::Type
    NodeStatus_<_tmpl>::MIN_PUBLICATION_PERIOD_MS = 20U; // 20

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::OFFLINE_TIMEOUT_MS >::Type
    NodeStatus_<_tmpl>::OFFLINE_TIMEOUT_MS = 3000U; // 3000

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::STATUS_OK >::Type
    NodeStatus_<_tmpl>::STATUS_OK = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::STATUS_INITIALIZING >::Type
    NodeStatus_<_tmpl>::STATUS_INITIALIZING = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::STATUS_WARNING >::Type
    NodeStatus_<_tmpl>::STATUS_WARNING = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::STATUS_CRITICAL >::Type
    NodeStatus_<_tmpl>::STATUS_CRITICAL = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename NodeStatus_<_tmpl>::ConstantTypes::STATUS_OFFLINE >::Type
    NodeStatus_<_tmpl>::STATUS_OFFLINE = 15U; // 15

/*
 * Final typedef
 */
typedef NodeStatus_<0> NodeStatus;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::NodeStatus > _uavcan_gdtr_registrator_NodeStatus;

}

} // Namespace uavcan
} // Namespace protocol

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::NodeStatus >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::NodeStatus::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::NodeStatus >::stream(Stream& s, ::uavcan::protocol::NodeStatus::ParameterType obj, const int level)
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
    s << "uptime_sec: ";
    YamlStreamer< ::uavcan::protocol::NodeStatus::FieldTypes::uptime_sec >::stream(s, obj.uptime_sec, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "status_code: ";
    YamlStreamer< ::uavcan::protocol::NodeStatus::FieldTypes::status_code >::stream(s, obj.status_code, level + 1);
}

}

namespace uavcan
{
namespace protocol
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::NodeStatus::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::NodeStatus >::stream(s, obj, 0);
    return s;
}

}
}