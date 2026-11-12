#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD779E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CIAIHMBIGJF_OFFSET UNITYSDK_OFFSET(0xCD777D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD779D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD77630)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_START_OFFSET UNITYSDK_OFFSET(0xCD77300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_1_OFFSET UNITYSDK_OFFSET(0xCD77760)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_2_OFFSET UNITYSDK_OFFSET(0xCD77870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLYEND_OFFSET UNITYSDK_OFFSET(0xCD77980)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_1_OFFSET UNITYSDK_OFFSET(0xCD778E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_2_OFFSET UNITYSDK_OFFSET(0xCD77930)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoHipplenButterflyAnimHelper_TypeDefinitionIndex = 77929;

	class MonoHipplenButterflyAnimHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Butterfly_1; // 0x18
		::UnityEngine::Transform* Butterfly_2; // 0x20
		::UnityEngine::SkinnedMeshRenderer* ButterflyMeshRenderer_1; // 0x28
		::UnityEngine::SkinnedMeshRenderer* ButterflyMeshRenderer_2; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* OGBLOMIPKMB; // 0x38
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AEPIJLFGFHC()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("RPG.Client.ActivityHipplen", "MonoHipplenButterflyAnimHelper")->GetStaticField(0x17970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void TriggerButterflyAnim_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_1_OFFSET))(this);
		}

		::System::Void TriggerButterflyAnim_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERBUTTERFLYANIM_2_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterfly_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_1_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterfly_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLY_2_OFFSET))(this);
		}

		::System::Void TriggerLookAtButterflyEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_TRIGGERLOOKATBUTTERFLYEND_OFFSET))(this);
		}

		::UnityEngine::Material* CIAIHMBIGJF()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOHIPPLENBUTTERFLYANIMHELPER_CIAIHMBIGJF_OFFSET))(this);
		}

	};
}
