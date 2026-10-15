#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace System { class String; }

#define OMJJNKHHKPG_BEMELOPJLIK_OFFSET UNITYSDK_OFFSET(0xBF2F9F0)
#define OMJJNKHHKPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2EFE0)
#define OMJJNKHHKPG_DJCAMHDDDLJ_OFFSET UNITYSDK_OFFSET(0xBF2FA90)
#define OMJJNKHHKPG_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xBF2FC90)
#define OMJJNKHHKPG_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xBF2FCE0)
#define OMJJNKHHKPG_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBF2FC70)
#define OMJJNKHHKPG_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xBF2FCA0)
#define OMJJNKHHKPG_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xBF2FCC0)
#define OMJJNKHHKPG_GGHLLKBOMGL_OFFSET UNITYSDK_OFFSET(0xBF2F8C0)
#define OMJJNKHHKPG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBF2F0F0)
#define OMJJNKHHKPG_IPNLBFBLNMD_OFFSET UNITYSDK_OFFSET(0xBF2FB40)
#define OMJJNKHHKPG_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0xBF2F690)
#define OMJJNKHHKPG_JBNIJHDLPGA_OFFSET UNITYSDK_OFFSET(0xBF2FC00)
#define OMJJNKHHKPG_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xBF2F930)
#define OMJJNKHHKPG_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0xBF2F140)
#define OMJJNKHHKPG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBF2F270)
#define OMJJNKHHKPG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF2EFF0)
#define OMJJNKHHKPG_LIHCGMDBMEO_OFFSET UNITYSDK_OFFSET(0xBF2FAE0)
#define OMJJNKHHKPG_LOPNJPMFEEJ_OFFSET UNITYSDK_OFFSET(0xBF2FBA0)
#define OMJJNKHHKPG_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0xBF2F470)
#define OMJJNKHHKPG_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xBF2FCF0)
#define OMJJNKHHKPG_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBF2FC80)
#define OMJJNKHHKPG_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xBF2FCB0)
#define OMJJNKHHKPG_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xBF2FCD0)

	class OMJJNKHHKPG : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x10
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x18
		::UnityEngine::Matrix4x4 DNPHGOELBMH; // 0x20
		::System::Single _KeepDuration_k__BackingField; // 0x60
		::UnityEngine::Matrix4x4 GDFKMHHCGMJ; // 0x64
		::System::Single _TransitInTime_k__BackingField; // 0xA4
		::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0xA8
		::System::Single GDAHOGKBPCP; // 0xAC
		::System::Single _TransitOutTime_k__BackingField; // 0xB0
		::UnityEngine::Matrix4x4 EJNMGLJJEOO; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_JKHOBGMGIHJ_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Matrix4x4 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void BEMELOPJLIK(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_BEMELOPJLIK_OFFSET))(this, a1);
		}

		::System::Void DJCAMHDDDLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_DJCAMHDDDLJ_OFFSET))(this);
		}

		::System::Void LIHCGMDBMEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_LIHCGMDBMEO_OFFSET))(this, a1);
		}

		::System::Void IPNLBFBLNMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_IPNLBFBLNMD_OFFSET))(this, a1);
		}

		::System::Void LOPNJPMFEEJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_LOPNJPMFEEJ_OFFSET))(this, a1);
		}

		::System::Void JBNIJHDLPGA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_JBNIJHDLPGA_OFFSET))(this, a1);
		}

		::System::Void JAMHIBAPEBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_JAMHIBAPEBG_OFFSET))(this, a1);
		}

		::System::Void MAOFJHICOHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_MAOFJHICOHP_OFFSET))(this, a1);
		}

		::System::Void GGHLLKBOMGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GGHLLKBOMGL_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_JEJLPHKIHLB_OFFSET))(this);
		}

		::RPG::Client::VCameraChangeDataState get_State()
		{
			return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Single get_TransitInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GET_TRANSITINTIME_OFFSET))(this);
		}

		::System::Void set_TransitInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_SET_TRANSITINTIME_OFFSET))(this, a1);
		}

		::System::Single get_TransitOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GET_TRANSITOUTTIME_OFFSET))(this);
		}

		::System::Void set_TransitOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_SET_TRANSITOUTTIME_OFFSET))(this, a1);
		}

		::System::Single get_KeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_GET_KEEPDURATION_OFFSET))(this);
		}

		::System::Void set_KeepDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMJJNKHHKPG_SET_KEEPDURATION_OFFSET))(this, a1);
		}

	};
