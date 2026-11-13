#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCOAGBCDNBC_CTOR_OFFSET UNITYSDK_OFFSET(0x2032AC70)
#define OCOAGBCDNBC_GET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x20339970)
#define OCOAGBCDNBC_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A30)
#define OCOAGBCDNBC_GET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A50)
#define OCOAGBCDNBC_GET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A10)
#define OCOAGBCDNBC_GET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x203399B0)
#define OCOAGBCDNBC_GET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x203399D0)
#define OCOAGBCDNBC_GET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x20339990)
#define OCOAGBCDNBC_GET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x203399F0)
#define OCOAGBCDNBC_SET_ENABLEIPV6_OFFSET UNITYSDK_OFFSET(0x20339980)
#define OCOAGBCDNBC_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A40)
#define OCOAGBCDNBC_SET_MINLONGUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A60)
#define OCOAGBCDNBC_SET_PACKETLOSSRATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A20)
#define OCOAGBCDNBC_SET_PINGTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x203399C0)
#define OCOAGBCDNBC_SET_PREFERIPV6RTTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x203399E0)
#define OCOAGBCDNBC_SET_RECVTIMEOUTMILISECONDS_OFFSET UNITYSDK_OFFSET(0x203399A0)
#define OCOAGBCDNBC_SET_RTTUNSTABLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x20339A00)

inline static constexpr unsigned int OCOAGBCDNBC_TypeDefinitionIndex = 45041;

	class OCOAGBCDNBC : public ::System::Object
	{
	public:
		::System::UInt32 _PreferIPv6RttThreshold_k__BackingField; // 0x10
		::System::Single _MinLongUnstableThreshold_k__BackingField; // 0x14
		::System::Single _PacketLossRateThreshold_k__BackingField; // 0x18
		::System::Int32 _RecvTimeoutMiliSeconds_k__BackingField; // 0x1C
		::System::Boolean _EnableIpv6_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single _MaxLongUnstableThreshold_k__BackingField; // 0x24
		::System::UInt32 _RttUnstableThreshold_k__BackingField; // 0x28
		::System::UInt32 _PingTimeoutMiliSeconds_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableIpv6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_ENABLEIPV6_OFFSET))(this);
		}

		::System::Void set_EnableIpv6(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_ENABLEIPV6_OFFSET))(this, a1);
		}

		::System::Int32 get_RecvTimeoutMiliSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_RECVTIMEOUTMILISECONDS_OFFSET))(this);
		}

		::System::Void set_RecvTimeoutMiliSeconds(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_RECVTIMEOUTMILISECONDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_PingTimeoutMiliSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_PINGTIMEOUTMILISECONDS_OFFSET))(this);
		}

		::System::Void set_PingTimeoutMiliSeconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_PINGTIMEOUTMILISECONDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_PreferIPv6RttThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_PreferIPv6RttThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_PREFERIPV6RTTTHRESHOLD_OFFSET))(this, a1);
		}

		::System::UInt32 get_RttUnstableThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_RTTUNSTABLETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_RttUnstableThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_RTTUNSTABLETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_PacketLossRateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_PACKETLOSSRATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_PacketLossRateThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_PACKETLOSSRATETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_MaxLongUnstableThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_MaxLongUnstableThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_MAXLONGUNSTABLETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_MinLongUnstableThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_GET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_MinLongUnstableThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCOAGBCDNBC_SET_MINLONGUNSTABLETHRESHOLD_OFFSET))(this, a1);
		}

	};
