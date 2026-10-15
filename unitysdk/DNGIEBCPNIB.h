#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLLBMIAGBN.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNGIEBCPNIB;
namespace RPG::GameCore { class AdventurePositionCheckConfig; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace UnityEngine { class Collider; }

#define DNGIEBCPNIB_CHBOHMJJLHG_OFFSET UNITYSDK_OFFSET(0x11952AA0)
#define DNGIEBCPNIB_CTOR_OFFSET UNITYSDK_OFFSET(0x11954020)
#define DNGIEBCPNIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11952920)
#define DNGIEBCPNIB_FDLALKNJPNK_OFFSET UNITYSDK_OFFSET(0x11953F50)
#define DNGIEBCPNIB_GEOOOMHFPDF_OFFSET UNITYSDK_OFFSET(0x11953A00)
#define DNGIEBCPNIB_GET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x11954000)
#define DNGIEBCPNIB_HJKPIDACIEM_1_OFFSET UNITYSDK_OFFSET(0x11953030)
#define DNGIEBCPNIB_HJKPIDACIEM_OFFSET UNITYSDK_OFFSET(0x11952FB0)
#define DNGIEBCPNIB_IOPJBIACFCG_OFFSET UNITYSDK_OFFSET(0x11953F80)
#define DNGIEBCPNIB_JLHFBGPLOOC_OFFSET UNITYSDK_OFFSET(0x11952F60)
#define DNGIEBCPNIB_LIPPCCMHFDC_OFFSET UNITYSDK_OFFSET(0x11953200)
#define DNGIEBCPNIB_LMBBKNHEPCA_OFFSET UNITYSDK_OFFSET(0x11953BB0)
#define DNGIEBCPNIB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x11952810)
#define DNGIEBCPNIB_NAKKPDBKAIH_OFFSET UNITYSDK_OFFSET(0x11953F70)
#define DNGIEBCPNIB_SET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x11954010)
#define DNGIEBCPNIB_TICK_OFFSET UNITYSDK_OFFSET(0x11952970)

	class DNGIEBCPNIB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* KMHBOBANHJI; // 0x18
		::RPG::GameCore::AdventurePositionCheckConfig* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::GameEntity* _PosApdationTarget_k__BackingField; // 0x28
		::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x30
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x38
		::System::Action* GAHEPJKKNMJ; // 0x40
		::System::Single LPCKOIGHKLK; // 0x48
		::System::Boolean LAMACEHMLGJ; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 AGNNCPBIICH; // 0x50
		::RPG::GameCore::CharacterAdventureSomatoType KBLEAJNBLEL; // 0x5C
		::System::Int32 CPANBNANIMM; // 0x60
		::HLLLBMIAGBN ANOCHAPDGFN; // 0x64
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_HGEJCFJANNM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "DNGIEBCPNIB")->GetStaticField(0x6F300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::AdventurePositionCheckConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePositionCheckConfig*))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_TICK_OFFSET))(this, a1);
		}

		::System::Void JLHFBGPLOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_JLHFBGPLOOC_OFFSET))(this);
		}

		::System::Boolean HJKPIDACIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_HJKPIDACIEM_OFFSET))(this);
		}

		::System::Boolean HJKPIDACIEM_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_HJKPIDACIEM_1_OFFSET))(this, a1);
		}

		::System::Void GEOOOMHFPDF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_GEOOOMHFPDF_OFFSET))(this, a1);
		}

		::System::Void CHBOHMJJLHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_CHBOHMJJLHG_OFFSET))(this);
		}

		::System::Boolean LIPPCCMHFDC(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_LIPPCCMHFDC_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMBBKNHEPCA(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_LMBBKNHEPCA_OFFSET))(this, a1, a2, a3);
		}

		::HLLLBMIAGBN FDLALKNJPNK()
		{
			return ((::HLLLBMIAGBN(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_FDLALKNJPNK_OFFSET))(this);
		}

		::RPG::GameCore::CharacterAdventureSomatoType NAKKPDBKAIH()
		{
			return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_NAKKPDBKAIH_OFFSET))(this);
		}

		::System::Void IOPJBIACFCG(::RPG::GameCore::CharacterAdventureSomatoType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAdventureSomatoType))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_IOPJBIACFCG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_PosApdationTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_GET_POSAPDATIONTARGET_OFFSET))(this);
		}

		::System::Void set_PosApdationTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNGIEBCPNIB_SET_POSAPDATIONTARGET_OFFSET))(this, a1);
		}

	};
