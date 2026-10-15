#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }

#define APANODGHDHP_BEMELOPJLIK_OFFSET UNITYSDK_OFFSET(0x158C9DA0)
#define APANODGHDHP_CTOR_OFFSET UNITYSDK_OFFSET(0x158C9500)
#define APANODGHDHP_DJCAMHDDDLJ_OFFSET UNITYSDK_OFFSET(0x158C9E60)
#define APANODGHDHP_EJOOBDPABHP_OFFSET UNITYSDK_OFFSET(0x158C9790)
#define APANODGHDHP_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x158CA060)
#define APANODGHDHP_GET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x158CA120)
#define APANODGHDHP_GET_OFFSETFORWARD_OFFSET UNITYSDK_OFFSET(0x158CA0B0)
#define APANODGHDHP_GET_STATE_OFFSET UNITYSDK_OFFSET(0x158CA040)
#define APANODGHDHP_GET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x158CA0E0)
#define APANODGHDHP_GET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x158CA100)
#define APANODGHDHP_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0x158C9570)
#define APANODGHDHP_GGHLLKBOMGL_OFFSET UNITYSDK_OFFSET(0x158C9C90)
#define APANODGHDHP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x158C95F0)
#define APANODGHDHP_IJAOFKCFAOO_OFFSET UNITYSDK_OFFSET(0x158CA090)
#define APANODGHDHP_IPNLBFBLNMD_OFFSET UNITYSDK_OFFSET(0x158C9F10)
#define APANODGHDHP_JAMHIBAPEBG_OFFSET UNITYSDK_OFFSET(0x158C9B40)
#define APANODGHDHP_JBNIJHDLPGA_OFFSET UNITYSDK_OFFSET(0x158C9FD0)
#define APANODGHDHP_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x158C9CF0)
#define APANODGHDHP_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0x158C9640)
#define APANODGHDHP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x158C9800)
#define APANODGHDHP_LIHCGMDBMEO_OFFSET UNITYSDK_OFFSET(0x158C9EB0)
#define APANODGHDHP_LOPNJPMFEEJ_OFFSET UNITYSDK_OFFSET(0x158C9F70)
#define APANODGHDHP_MAOFJHICOHP_OFFSET UNITYSDK_OFFSET(0x158C99D0)
#define APANODGHDHP_PDFJGKLLJMD_OFFSET UNITYSDK_OFFSET(0x158CA070)
#define APANODGHDHP_PEEKFCFKHPC_OFFSET UNITYSDK_OFFSET(0x158C9770)
#define APANODGHDHP_SET_KEEPDURATION_OFFSET UNITYSDK_OFFSET(0x158CA130)
#define APANODGHDHP_SET_OFFSETFORWARD_OFFSET UNITYSDK_OFFSET(0x158CA0D0)
#define APANODGHDHP_SET_STATE_OFFSET UNITYSDK_OFFSET(0x158CA050)
#define APANODGHDHP_SET_TRANSITINTIME_OFFSET UNITYSDK_OFFSET(0x158CA0F0)
#define APANODGHDHP_SET_TRANSITOUTTIME_OFFSET UNITYSDK_OFFSET(0x158CA110)

inline static constexpr unsigned int APANODGHDHP_TypeDefinitionIndex = 69545;

	class APANODGHDHP : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x10
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x18
		::RPG::GameCore::VCameraVector3ChangeParam* IGHAHBNLIJA; // 0x20
		::RPG::MVector3 DNPHGOELBMH; // 0x28
		::RPG::MVector3 GDFKMHHCGMJ; // 0x34
		::System::Single _TransitOutTime_k__BackingField; // 0x40
		::RPG::MVector3 ACBGOJKPEEG; // 0x44
		::System::Single _TransitInTime_k__BackingField; // 0x50
		::UnityEngine::Vector3 _OffsetForward_k__BackingField; // 0x54
		::System::Single GDAHOGKBPCP; // 0x60
		::RPG::Client::VCameraChangeDataState _State_k__BackingField; // 0x64
		::System::Single _KeepDuration_k__BackingField; // 0x68
		::RPG::MVector3 EJNMGLJJEOO; // 0x6C
		::System::Void _ctor(::RPG::GameCore::VCameraVector3ChangeParam* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraVector3ChangeParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APANODGHDHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::RPG::MVector3 a1, ::System::Nullable_1<::RPG::MVector3> a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + APANODGHDHP_JKHOBGMGIHJ_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void BEMELOPJLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_BEMELOPJLIK_OFFSET))(this);
		}

		::System::Void EJOOBDPABHP(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + APANODGHDHP_EJOOBDPABHP_OFFSET))(this, a1);
		}

		::System::Void DJCAMHDDDLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_DJCAMHDDDLJ_OFFSET))(this);
		}

		::System::Void LIHCGMDBMEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_LIHCGMDBMEO_OFFSET))(this, a1);
		}

		::System::Void IPNLBFBLNMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_IPNLBFBLNMD_OFFSET))(this, a1);
		}

		::System::Void LOPNJPMFEEJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_LOPNJPMFEEJ_OFFSET))(this, a1);
		}

		::System::Void JBNIJHDLPGA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_JBNIJHDLPGA_OFFSET))(this, a1);
		}

		::System::Void GFMPFDFLMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GFMPFDFLMCD_OFFSET))(this);
		}

		::System::Void JAMHIBAPEBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_JAMHIBAPEBG_OFFSET))(this, a1);
		}

		::System::Void MAOFJHICOHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_MAOFJHICOHP_OFFSET))(this, a1);
		}

		::System::Void GGHLLKBOMGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_GGHLLKBOMGL_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_JEJLPHKIHLB_OFFSET))(this);
		}

		::RPG::Client::VCameraChangeDataState get_State()
		{
			return ((::RPG::Client::VCameraChangeDataState(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::VCameraChangeDataState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VCameraChangeDataState))((::PBYTE)hIl2Cpp + APANODGHDHP_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GCCAABJLGIG_OFFSET))(this);
		}

		::RPG::MVector3 PDFJGKLLJMD()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_PDFJGKLLJMD_OFFSET))(this);
		}

		::System::Boolean IJAOFKCFAOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_IJAOFKCFAOO_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_OffsetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GET_OFFSETFORWARD_OFFSET))(this);
		}

		::System::Void set_OffsetForward(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + APANODGHDHP_SET_OFFSETFORWARD_OFFSET))(this, a1);
		}

		::System::Single get_TransitInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GET_TRANSITINTIME_OFFSET))(this);
		}

		::System::Void set_TransitInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_SET_TRANSITINTIME_OFFSET))(this, a1);
		}

		::System::Single get_TransitOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GET_TRANSITOUTTIME_OFFSET))(this);
		}

		::System::Void set_TransitOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_SET_TRANSITOUTTIME_OFFSET))(this, a1);
		}

		::System::Single get_KeepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_GET_KEEPDURATION_OFFSET))(this);
		}

		::System::Void set_KeepDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APANODGHDHP_SET_KEEPDURATION_OFFSET))(this, a1);
		}

		::System::Boolean PEEKFCFKHPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APANODGHDHP_PEEKFCFKHPC_OFFSET))(this);
		}

	};
