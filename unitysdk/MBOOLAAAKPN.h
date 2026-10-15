#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TimeScaleStack; }

#define MBOOLAAAKPN_AMLFDDFDMFA_OFFSET UNITYSDK_OFFSET(0xB870CF0)
#define MBOOLAAAKPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB870CE0)
#define MBOOLAAAKPN_DPEBJDODCPH_OFFSET UNITYSDK_OFFSET(0xB871420)
#define MBOOLAAAKPN_FCEDEJOKEIB_OFFSET UNITYSDK_OFFSET(0xB8714E0)
#define MBOOLAAAKPN_GCLHMIHPONH_OFFSET UNITYSDK_OFFSET(0xB871230)
#define MBOOLAAAKPN_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xB871530)
#define MBOOLAAAKPN_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xB871090)
#define MBOOLAAAKPN_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB871070)
#define MBOOLAAAKPN_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB871050)
#define MBOOLAAAKPN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB870F00)
#define MBOOLAAAKPN_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xB871390)
#define MBOOLAAAKPN_KCELKIJLDKC_OFFSET UNITYSDK_OFFSET(0xB871140)
#define MBOOLAAAKPN_LBEGAHHDKBE_OFFSET UNITYSDK_OFFSET(0xB8710B0)
#define MBOOLAAAKPN_LDKCEBJMFMA_OFFSET UNITYSDK_OFFSET(0xB871550)
#define MBOOLAAAKPN_LEAMEFBBGMM_OFFSET UNITYSDK_OFFSET(0xB870F50)
#define MBOOLAAAKPN_NJPLIAOFMPC_OFFSET UNITYSDK_OFFSET(0xB8715A0)
#define MBOOLAAAKPN_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB871190)
#define MBOOLAAAKPN_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0xB871540)
#define MBOOLAAAKPN_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xB8710A0)
#define MBOOLAAAKPN_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB871080)
#define MBOOLAAAKPN_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB871060)

	class MBOOLAAAKPN : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _DeltaTime_k__BackingField; // 0x10
		::System::UInt64 _CurrentFrame_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _TimeScale_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CurrentTime_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_TimeScale()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_SET_TIMESCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DeltaTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void set_DeltaTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_SET_DELTATIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_SET_CURRENTTIME_OFFSET))(this, a1);
		}

		::System::Void LBEGAHHDKBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_LBEGAHHDKBE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KCELKIJLDKC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_KCELKIJLDKC_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void DPEBJDODCPH(::RPG::GameCore::FixPoint a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Single))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_DPEBJDODCPH_OFFSET))(this, a1, a2);
		}

		::System::Void FCEDEJOKEIB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_FCEDEJOKEIB_OFFSET))(this, a1);
		}

		::System::UInt64 get_CurrentFrame()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_GET_CURRENTFRAME_OFFSET))(this);
		}

		::System::Void set_CurrentFrame(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_SET_CURRENTFRAME_OFFSET))(this, a1);
		}

		::System::Void LDKCEBJMFMA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_LDKCEBJMFMA_OFFSET))(this, a1);
		}

		::System::Void AMLFDDFDMFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_AMLFDDFDMFA_OFFSET))(this);
		}

		::System::Void LEAMEFBBGMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_LEAMEFBBGMM_OFFSET))(this);
		}

		::System::Void NJPLIAOFMPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_NJPLIAOFMPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::TimeScaleStack* GCLHMIHPONH()
		{
			return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBOOLAAAKPN_GCLHMIHPONH_OFFSET))(this);
		}

	};
