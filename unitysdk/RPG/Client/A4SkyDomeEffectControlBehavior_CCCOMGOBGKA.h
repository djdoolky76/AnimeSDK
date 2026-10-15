#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_AJNNOKGNILF_OFFSET UNITYSDK_OFFSET(0xC3984C0)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0xC3991A0)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_CTOR_OFFSET UNITYSDK_OFFSET(0xC397330)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_KPEMMOHJECH_OFFSET UNITYSDK_OFFSET(0xC398BA0)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_LGCOPKCLJPN_OFFSET UNITYSDK_OFFSET(0xC398670)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_MIECMHBAAKD_OFFSET UNITYSDK_OFFSET(0xC39A150)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_MPJJAJLMGFI_OFFSET UNITYSDK_OFFSET(0xC39A310)
#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_PIKLHHKINHP_OFFSET UNITYSDK_OFFSET(0xC398A20)

namespace RPG::Client
{
	inline static constexpr unsigned int A4SkyDomeEffectControlBehavior_CCCOMGOBGKA_TypeDefinitionIndex = 70874;

	class A4SkyDomeEffectControlBehavior_CCCOMGOBGKA : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* NCOPKAMDNDB; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* MNIGIOIJOPF; // 0x18
		::UnityEngine::Material* PJLNMFJICOE; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* MBOHCBIOHKG; // 0x28
		::UnityEngine::Material* PNECEONKEKL; // 0x30
		::System::Int32 DPLHIKOPAMD; // 0x38
		::System::Int32 CPBDKOBJNCG; // 0x3C
		::System::Void _ctor(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_CTOR_OFFSET))(this, a1);
		}

		::System::Void LGCOPKCLJPN(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_LGCOPKCLJPN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AJNNOKGNILF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_AJNNOKGNILF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPEMMOHJECH(::UnityEngine::Material* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::System::Int32 a4, ::System::Boolean a5, ::UnityEngine::Texture2D* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Int32, ::System::Boolean, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_KPEMMOHJECH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MIECMHBAAKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_MIECMHBAAKD_OFFSET))(this);
		}

		::System::Void PIKLHHKINHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_PIKLHHKINHP_OFFSET))(this);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::UnityEngine::Material* MPJJAJLMGFI()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CCCOMGOBGKA_MPJJAJLMGFI_OFFSET))(this);
		}

	};
}
