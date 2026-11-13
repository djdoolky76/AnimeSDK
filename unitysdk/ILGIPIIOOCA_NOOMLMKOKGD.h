#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EPropCurveMoveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EBLHIMCKJIJ;
namespace RPG::GameCore { class TransformComponent; }

#define ILGIPIIOOCA_NOOMLMKOKGD_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1B5963C0)
#define ILGIPIIOOCA_NOOMLMKOKGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B595690)
#define ILGIPIIOOCA_NOOMLMKOKGD_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1B594F30)
#define ILGIPIIOOCA_NOOMLMKOKGD_FGNMNCPPBBC_OFFSET UNITYSDK_OFFSET(0x1B596130)
#define ILGIPIIOOCA_NOOMLMKOKGD_FNEAEMAGLGE_OFFSET UNITYSDK_OFFSET(0x1B596420)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B5968A0)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_CURVEROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1B596860)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x1B5968C0)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_INTERPHALFTIME_OFFSET UNITYSDK_OFFSET(0x1B596880)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B596790)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVESPEEDFACTOR_OFFSET UNITYSDK_OFFSET(0x1B596920)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVETYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1B596900)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x1B5968E0)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_USEGOROTATION_OFFSET UNITYSDK_OFFSET(0x1B5967E0)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_USEPITCH_OFFSET UNITYSDK_OFFSET(0x1B596820)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_USEROLL_OFFSET UNITYSDK_OFFSET(0x1B596840)
#define ILGIPIIOOCA_NOOMLMKOKGD_GET_USEYAW_OFFSET UNITYSDK_OFFSET(0x1B596800)
#define ILGIPIIOOCA_NOOMLMKOKGD_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1B5967C0)
#define ILGIPIIOOCA_NOOMLMKOKGD_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1B596690)
#define ILGIPIIOOCA_NOOMLMKOKGD_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1B595AB0)
#define ILGIPIIOOCA_NOOMLMKOKGD_IBHOAEDDDMH_OFFSET UNITYSDK_OFFSET(0x1B595AF0)
#define ILGIPIIOOCA_NOOMLMKOKGD_KCAOCLBDAMN_OFFSET UNITYSDK_OFFSET(0x1B5959D0)
#define ILGIPIIOOCA_NOOMLMKOKGD_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1B5967B0)
#define ILGIPIIOOCA_NOOMLMKOKGD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1B595BF0)
#define ILGIPIIOOCA_NOOMLMKOKGD_MCNMLGMCFHD_OFFSET UNITYSDK_OFFSET(0x1B595570)
#define ILGIPIIOOCA_NOOMLMKOKGD_NLDKNODEPOG_OFFSET UNITYSDK_OFFSET(0x1B5959E0)
#define ILGIPIIOOCA_NOOMLMKOKGD_OCDPFLIBFCB_OFFSET UNITYSDK_OFFSET(0x1B5967D0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B5968B0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_CURVEROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1B596870)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_DECELERATION_OFFSET UNITYSDK_OFFSET(0x1B5968D0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_INTERPHALFTIME_OFFSET UNITYSDK_OFFSET(0x1B596890)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B5967A0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVESPEEDFACTOR_OFFSET UNITYSDK_OFFSET(0x1B596930)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVETYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1B596910)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVETYPE_OFFSET UNITYSDK_OFFSET(0x1B5968F0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_USEGOROTATION_OFFSET UNITYSDK_OFFSET(0x1B5967F0)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_USEPITCH_OFFSET UNITYSDK_OFFSET(0x1B596830)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_USEROLL_OFFSET UNITYSDK_OFFSET(0x1B596850)
#define ILGIPIIOOCA_NOOMLMKOKGD_SET_USEYAW_OFFSET UNITYSDK_OFFSET(0x1B596810)
#define ILGIPIIOOCA_NOOMLMKOKGD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5959F0)

inline static constexpr unsigned int ILGIPIIOOCA_NOOMLMKOKGD_TypeDefinitionIndex = 59566;

	class ILGIPIIOOCA_NOOMLMKOKGD : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x10
		::EBLHIMCKJIJ* FLMODBLFAGD; // 0x18
		::System::Single PFEKBEPMDEL; // 0x20
		::UnityEngine::Vector3 APNOKIFCLII; // 0x24
		::System::Single _MoveTypeValue_k__BackingField; // 0x30
		::System::Single _Acceleration_k__BackingField; // 0x34
		::System::Boolean _UsePitch_k__BackingField; // 0x38
		::System::Boolean _UseYaw_k__BackingField; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single _MoveSpeedFactor_k__BackingField; // 0x3C
		::System::Single _InterpHalfTime_k__BackingField; // 0x40
		::System::Single LOMILOPFKPI; // 0x44
		::System::Single _Deceleration_k__BackingField; // 0x48
		::RPG::GameCore::EPropCurveMoveType _MoveType_k__BackingField; // 0x4C
		::UnityEngine::Quaternion _CurveRotationOffset_k__BackingField; // 0x50
		::System::Boolean _UseGORotation_k__BackingField; // 0x60
		::System::Boolean _UseRoll_k__BackingField; // 0x61
		::System::Boolean _IsFinish_k__BackingField; // 0x62
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_CTOR_OFFSET))(this);
		}

		::EBLHIMCKJIJ* KCAOCLBDAMN()
		{
			return ((::EBLHIMCKJIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_KCAOCLBDAMN_OFFSET))(this);
		}

		::System::Void NLDKNODEPOG(::EBLHIMCKJIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBLHIMCKJIJ*))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_NLDKNODEPOG_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void IBHOAEDDDMH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_IBHOAEDDDMH_OFFSET))(this, a1, a2);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_ABKBOGIGAEH_OFFSET))(this);
		}

		::UnityEngine::Quaternion FGNMNCPPBBC(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_FGNMNCPPBBC_OFFSET))(this, a1);
		}

		::System::Single FNEAEMAGLGE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_FNEAEMAGLGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MCNMLGMCFHD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_MCNMLGMCFHD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single HAIHHFOPBLN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_HAIHHFOPBLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_LDAMHBBILAD_OFFSET))(this);
		}

		::EBLHIMCKJIJ* GGBLHEHJBDO()
		{
			return ((::EBLHIMCKJIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GGBLHEHJBDO_OFFSET))(this);
		}

		::RPG::GameCore::TransformComponent* OCDPFLIBFCB()
		{
			return ((::RPG::GameCore::TransformComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_OCDPFLIBFCB_OFFSET))(this);
		}

		::System::Boolean get_UseGORotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_USEGOROTATION_OFFSET))(this);
		}

		::System::Void set_UseGORotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_USEGOROTATION_OFFSET))(this, a1);
		}

		::System::Boolean get_UseYaw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_USEYAW_OFFSET))(this);
		}

		::System::Void set_UseYaw(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_USEYAW_OFFSET))(this, a1);
		}

		::System::Boolean get_UsePitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_USEPITCH_OFFSET))(this);
		}

		::System::Void set_UsePitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_USEPITCH_OFFSET))(this, a1);
		}

		::System::Boolean get_UseRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_USEROLL_OFFSET))(this);
		}

		::System::Void set_UseRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_USEROLL_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_CurveRotationOffset()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_CURVEROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_CurveRotationOffset(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_CURVEROTATIONOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_InterpHalfTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_INTERPHALFTIME_OFFSET))(this);
		}

		::System::Void set_InterpHalfTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_INTERPHALFTIME_OFFSET))(this, a1);
		}

		::System::Single get_Acceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_Acceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_ACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_Deceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_DECELERATION_OFFSET))(this);
		}

		::System::Void set_Deceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_DECELERATION_OFFSET))(this, a1);
		}

		::RPG::GameCore::EPropCurveMoveType get_MoveType()
		{
			return ((::RPG::GameCore::EPropCurveMoveType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVETYPE_OFFSET))(this);
		}

		::System::Void set_MoveType(::RPG::GameCore::EPropCurveMoveType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EPropCurveMoveType))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVETYPE_OFFSET))(this, a1);
		}

		::System::Single get_MoveTypeValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVETYPEVALUE_OFFSET))(this);
		}

		::System::Void set_MoveTypeValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVETYPEVALUE_OFFSET))(this, a1);
		}

		::System::Single get_MoveSpeedFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_GET_MOVESPEEDFACTOR_OFFSET))(this);
		}

		::System::Void set_MoveSpeedFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILGIPIIOOCA_NOOMLMKOKGD_SET_MOVESPEEDFACTOR_OFFSET))(this, a1);
		}

	};
