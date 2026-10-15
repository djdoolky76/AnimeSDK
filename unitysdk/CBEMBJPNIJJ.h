#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBEMBJPNIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A1CD0)
#define CBEMBJPNIJJ_DDFDECHHJJF_OFFSET UNITYSDK_OFFSET(0xC4A1C20)
#define CBEMBJPNIJJ_GET_ASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0xC4A1AE0)
#define CBEMBJPNIJJ_GET_AVGLIFETIMEMS_OFFSET UNITYSDK_OFFSET(0xC4A1BE0)
#define CBEMBJPNIJJ_GET_BLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1B60)
#define CBEMBJPNIJJ_GET_CREATES_OFFSET UNITYSDK_OFFSET(0xC4A1B00)
#define CBEMBJPNIJJ_GET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1B80)
#define CBEMBJPNIJJ_GET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1BC0)
#define CBEMBJPNIJJ_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xC4A1AA0)
#define CBEMBJPNIJJ_GET_LIFETIMESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1C00)
#define CBEMBJPNIJJ_GET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1BA0)
#define CBEMBJPNIJJ_GET_REMOVES_OFFSET UNITYSDK_OFFSET(0xC4A1B40)
#define CBEMBJPNIJJ_GET_REUSES_OFFSET UNITYSDK_OFFSET(0xC4A1B20)
#define CBEMBJPNIJJ_GET_SYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0xC4A1AC0)
#define CBEMBJPNIJJ_NIGBDNJMHKL_OFFSET UNITYSDK_OFFSET(0xC4A1C70)
#define CBEMBJPNIJJ_SET_ASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0xC4A1AF0)
#define CBEMBJPNIJJ_SET_AVGLIFETIMEMS_OFFSET UNITYSDK_OFFSET(0xC4A1BF0)
#define CBEMBJPNIJJ_SET_BLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1B70)
#define CBEMBJPNIJJ_SET_CREATES_OFFSET UNITYSDK_OFFSET(0xC4A1B10)
#define CBEMBJPNIJJ_SET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1B90)
#define CBEMBJPNIJJ_SET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1BD0)
#define CBEMBJPNIJJ_SET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xC4A1AB0)
#define CBEMBJPNIJJ_SET_LIFETIMESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1C10)
#define CBEMBJPNIJJ_SET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xC4A1BB0)
#define CBEMBJPNIJJ_SET_REMOVES_OFFSET UNITYSDK_OFFSET(0xC4A1B50)
#define CBEMBJPNIJJ_SET_REUSES_OFFSET UNITYSDK_OFFSET(0xC4A1B30)
#define CBEMBJPNIJJ_SET_SYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0xC4A1AD0)

	class CBEMBJPNIJJ : public ::System::Object
	{
	public:
		::System::String* _EffectPath_k__BackingField; // 0x10
		::System::Int32 _PeakActiveCount_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 _BlockedByMaxCount_k__BackingField; // 0x20
		::System::Int64 _LifetimeSampleCount_k__BackingField; // 0x28
		::System::Int64 _AsyncRequests_k__BackingField; // 0x30
		::System::Int64 _Removes_k__BackingField; // 0x38
		::System::Int64 _Creates_k__BackingField; // 0x40
		::System::Double _AvgLifetimeMs_k__BackingField; // 0x48
		::System::Int64 _Reuses_k__BackingField; // 0x50
		::System::Int32 _CurrentActiveCount_k__BackingField; // 0x58
		::System::Int32 _CurrentPoolCachedCount_k__BackingField; // 0x5C
		::System::Int64 _SyncRequests_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_CTOR_OFFSET))(this);
		}

		::System::String* get_EffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_EFFECTPATH_OFFSET))(this);
		}

		::System::Void set_EffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_EFFECTPATH_OFFSET))(this, a1);
		}

		::System::Int64 get_SyncRequests()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_SYNCREQUESTS_OFFSET))(this);
		}

		::System::Void set_SyncRequests(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_SYNCREQUESTS_OFFSET))(this, a1);
		}

		::System::Int64 get_AsyncRequests()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_ASYNCREQUESTS_OFFSET))(this);
		}

		::System::Void set_AsyncRequests(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_ASYNCREQUESTS_OFFSET))(this, a1);
		}

		::System::Int64 get_Creates()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_CREATES_OFFSET))(this);
		}

		::System::Void set_Creates(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_CREATES_OFFSET))(this, a1);
		}

		::System::Int64 get_Reuses()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_REUSES_OFFSET))(this);
		}

		::System::Void set_Reuses(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_REUSES_OFFSET))(this, a1);
		}

		::System::Int64 get_Removes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_REMOVES_OFFSET))(this);
		}

		::System::Void set_Removes(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_REMOVES_OFFSET))(this, a1);
		}

		::System::Int64 get_BlockedByMaxCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_BLOCKEDBYMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_BlockedByMaxCount(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_BLOCKEDBYMAXCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentActiveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_CURRENTACTIVECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentActiveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_CURRENTACTIVECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_PeakActiveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_PEAKACTIVECOUNT_OFFSET))(this);
		}

		::System::Void set_PeakActiveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_PEAKACTIVECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPoolCachedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentPoolCachedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this, a1);
		}

		::System::Double get_AvgLifetimeMs()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_AVGLIFETIMEMS_OFFSET))(this);
		}

		::System::Void set_AvgLifetimeMs(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_AVGLIFETIMEMS_OFFSET))(this, a1);
		}

		::System::Int64 get_LifetimeSampleCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_GET_LIFETIMESAMPLECOUNT_OFFSET))(this);
		}

		::System::Void set_LifetimeSampleCount(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_SET_LIFETIMESAMPLECOUNT_OFFSET))(this, a1);
		}

		::System::Int64 DDFDECHHJJF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_DDFDECHHJJF_OFFSET))(this);
		}

		::System::Double NIGBDNJMHKL()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMBJPNIJJ_NIGBDNJMHKL_OFFSET))(this);
		}

	};
