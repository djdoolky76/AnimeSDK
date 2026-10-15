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
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define DNGIEBCPNIB_CHBOHMJJLHG_OFFSET UNITYSDK_OFFSET(0x1194D7A0)
#define DNGIEBCPNIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1194ED20)
#define DNGIEBCPNIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1194D620)
#define DNGIEBCPNIB_FDLALKNJPNK_OFFSET UNITYSDK_OFFSET(0x1194EC50)
#define DNGIEBCPNIB_GEOOOMHFPDF_OFFSET UNITYSDK_OFFSET(0x1194E700)
#define DNGIEBCPNIB_GET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1194ED00)
#define DNGIEBCPNIB_HJKPIDACIEM_1_OFFSET UNITYSDK_OFFSET(0x1194DD30)
#define DNGIEBCPNIB_HJKPIDACIEM_OFFSET UNITYSDK_OFFSET(0x1194DCB0)
#define DNGIEBCPNIB_IOPJBIACFCG_OFFSET UNITYSDK_OFFSET(0x1194EC80)
#define DNGIEBCPNIB_JLHFBGPLOOC_OFFSET UNITYSDK_OFFSET(0x1194DC60)
#define DNGIEBCPNIB_LIPPCCMHFDC_OFFSET UNITYSDK_OFFSET(0x1194DF00)
#define DNGIEBCPNIB_LMBBKNHEPCA_OFFSET UNITYSDK_OFFSET(0x1194E8B0)
#define DNGIEBCPNIB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1194D510)
#define DNGIEBCPNIB_NAKKPDBKAIH_OFFSET UNITYSDK_OFFSET(0x1194EC70)
#define DNGIEBCPNIB_SET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1194ED10)
#define DNGIEBCPNIB_TICK_OFFSET UNITYSDK_OFFSET(0x1194D670)

inline static constexpr unsigned int DNGIEBCPNIB_TypeDefinitionIndex = 57363;

	class DNGIEBCPNIB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* _PosApdationTarget_k__BackingField; // 0x18
		::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x20
		::System::Action_1<::DNGIEBCPNIB*>* GAHEPJKKNMJ; // 0x28
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x30
		::System::Action_1<::DNGIEBCPNIB*>* KMHBOBANHJI; // 0x38
		::RPG::GameCore::AdventurePositionCheckConfig* IGHAHBNLIJA; // 0x40
		::System::Int32 CPANBNANIMM; // 0x48
		::UnityEngine::Vector3 AGNNCPBIICH; // 0x4C
		::System::Single LPCKOIGHKLK; // 0x58
		::RPG::GameCore::CharacterAdventureSomatoType KBLEAJNBLEL; // 0x5C
		::HLLLBMIAGBN ANOCHAPDGFN; // 0x60
		::System::Boolean LAMACEHMLGJ; // 0x7C
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_HGEJCFJANNM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "DNGIEBCPNIB")->GetStaticField(0x6EB40);
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
