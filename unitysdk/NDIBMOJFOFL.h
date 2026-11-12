#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDIBMOJFOFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC3D3CC0)
#define NDIBMOJFOFL_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xC3D3B90)
#define NDIBMOJFOFL_FCEDEJOKEIB_OFFSET UNITYSDK_OFFSET(0xC3D3BF0)
#define NDIBMOJFOFL_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xC3D3C50)
#define NDIBMOJFOFL_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xC3D39F0)
#define NDIBMOJFOFL_GET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xC3D3A10)
#define NDIBMOJFOFL_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC3D3960)
#define NDIBMOJFOFL_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xC3D3980)
#define NDIBMOJFOFL_KCELKIJLDKC_OFFSET UNITYSDK_OFFSET(0xC3D3B20)
#define NDIBMOJFOFL_LBEGAHHDKBE_OFFSET UNITYSDK_OFFSET(0xC3D3A30)
#define NDIBMOJFOFL_LDKCEBJMFMA_OFFSET UNITYSDK_OFFSET(0xC3D3C70)
#define NDIBMOJFOFL_OHAOCINBLFJ_OFFSET UNITYSDK_OFFSET(0xC3D39A0)
#define NDIBMOJFOFL_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xC3D3C60)
#define NDIBMOJFOFL_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xC3D3A00)
#define NDIBMOJFOFL_SET_PLAYTIME_OFFSET UNITYSDK_OFFSET(0xC3D3A20)
#define NDIBMOJFOFL_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC3D3970)
#define NDIBMOJFOFL_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xC3D3990)

inline static constexpr unsigned int NDIBMOJFOFL_TypeDefinitionIndex = 78255;

	class NDIBMOJFOFL : public ::System::Object
	{
	public:
		::System::Single _CurrentTime_k__BackingField; // 0x10
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0x14
		::System::UInt64 _CurrentFrame_k__BackingField; // 0x18
		::System::Single _PlayTime_k__BackingField; // 0x20
		::System::Single _TimeScale_k__BackingField; // 0x24
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
