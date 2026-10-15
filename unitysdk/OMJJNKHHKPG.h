#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace System { class String; }

#define OMJJNKHHKPG_BEMELOPJLIK_OFFSET UNITYSDK_OFFSET(0xBF283E0)
#define OMJJNKHHKPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF279E0)
#define OMJJNKHHKPG_DJCAMHDDDLJ_OFFSET UNITYSDK_OFFSET(0xBF28480)
#define OMJJNKHHKPG_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xBF28680)
#define OMJJNKHHKPG_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xBF286D0)
#define OMJJNKHHKPG_GET_STATE_OFFSET UNITYSDK_OFFSET(0xBF28660)
#define OMJJNKHHKPG_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xBF28690)
#define OMJJNKHHKPG_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xBF286B0)
#define OMJJNKHHKPG_GGHLLKBOMGL_OFFSET UNITYSDK_OFFSET(0xBF282C0)
#define OMJJNKHHKPG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBF27AF0)
#define OMJJNKHHKPG_IPNLBFBLNMD_OFFSET UNITYSDK_OFFSET(0xBF28530)
#define OMJJNKHHKPG_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0xBF28090)
#define OMJJNKHHKPG_JBNIJHDLPGA_OFFSET UNITYSDK_OFFSET(0xBF285F0)
#define OMJJNKHHKPG_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xBF28320)
#define OMJJNKHHKPG_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0xBF27B40)
#define OMJJNKHHKPG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBF27C70)
#define OMJJNKHHKPG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF279F0)
#define OMJJNKHHKPG_LIHCGMDBMEO_OFFSET UNITYSDK_OFFSET(0xBF284D0)
#define OMJJNKHHKPG_LOPNJPMFEEJ_OFFSET UNITYSDK_OFFSET(0xBF28590)
#define OMJJNKHHKPG_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0xBF27E60)
#define OMJJNKHHKPG_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0xBF286E0)
#define OMJJNKHHKPG_SET_STATE_OFFSET UNITYSDK_OFFSET(0xBF28670)
#define OMJJNKHHKPG_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0xBF286A0)
#define OMJJNKHHKPG_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0xBF286C0)

inline static constexpr unsigned int OMJJNKHHKPG_TypeDefinitionIndex = 69543;

	class OMJJNKHHKPG : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x10
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x18
		::System::Single _TransitInTime_k__BackingField; // 0x20
		::System::Single GDAHOGKBPCP; // 0x24
		::System::Single _TransitOutTime_k__BackingField; // 0x28
		::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x2C
		::UnityEngine::Matrix4x4 EJNMGLJJEOO; // 0x30
		::UnityEngine::Matrix4x4 GDFKMHHCGMJ; // 0x70
		::System::Single _KeepDuration_k__BackingField; // 0xB0
		::UnityEngine::Matrix4x4 DNPHGOELBMH; // 0xB4
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
