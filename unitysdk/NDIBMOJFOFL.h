#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDIBMOJFOFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4A5D0)
#define NDIBMOJFOFL_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xBB4A4A0)
#define NDIBMOJFOFL_FCEDEJOKEIB_OFFSET UNITYSDK_OFFSET(0xBB4A500)
#define NDIBMOJFOFL_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xBB4A560)
#define NDIBMOJFOFL_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xBB4A300)
#define NDIBMOJFOFL_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xBB4A320)
#define NDIBMOJFOFL_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xBB4A270)
#define NDIBMOJFOFL_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xBB4A290)
#define NDIBMOJFOFL_KCELKIJLDKC_OFFSET UNITYSDK_OFFSET(0xBB4A430)
#define NDIBMOJFOFL_LBEGAHHDKBE_OFFSET UNITYSDK_OFFSET(0xBB4A340)
#define NDIBMOJFOFL_LDKCEBJMFMA_OFFSET UNITYSDK_OFFSET(0xBB4A580)
#define NDIBMOJFOFL_OHAOCINBLFJ_OFFSET UNITYSDK_OFFSET(0xBB4A2B0)
#define NDIBMOJFOFL_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xBB4A570)
#define NDIBMOJFOFL_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xBB4A310)
#define NDIBMOJFOFL_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xBB4A330)
#define NDIBMOJFOFL_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xBB4A280)
#define NDIBMOJFOFL_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xBB4A2A0)

	class NDIBMOJFOFL : public ::System::Object
	{
	public:
		::System::UInt64 _CurrentFrame_k__BackingField; // 0x10
		::System::Single _PlayTime_k__BackingField; // 0x18
		::System::Single _TimeScale_k__BackingField; // 0x1C
		::System::Single _CurrentTime_k__BackingField; // 0x20
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_CTOR_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Single get_UnscaledDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_GET_UNSCALEDDELTATIME_OFFSET))(this);
		}

		::System::Void set_UnscaledDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_SET_UNSCALEDDELTATIME_OFFSET))(this, a1);
		}

		::System::Single OHAOCINBLFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_OHAOCINBLFJ_OFFSET))(this);
		}

		::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_SET_CURRENTTIME_OFFSET))(this, a1);
		}

		::System::Single get_PlayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_GET_PLAYTIME_OFFSET))(this);
		}

		::System::Void set_PlayTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_SET_PLAYTIME_OFFSET))(this, a1);
		}

		::System::Void LBEGAHHDKBE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_LBEGAHHDKBE_OFFSET))(this, a1);
		}

		::System::Single KCELKIJLDKC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_KCELKIJLDKC_OFFSET))(this);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void FCEDEJOKEIB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_FCEDEJOKEIB_OFFSET))(this, a1);
		}

		::System::UInt64 get_CurrentFrame()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_GET_CURRENTFRAME_OFFSET))(this);
		}

		::System::Void set_CurrentFrame(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_SET_CURRENTFRAME_OFFSET))(this, a1);
		}

		::System::Void LDKCEBJMFMA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NDIBMOJFOFL_LDKCEBJMFMA_OFFSET))(this, a1);
		}

	};
