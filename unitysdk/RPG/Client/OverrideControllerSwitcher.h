#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CLBGGIKNLLF_OFFSET UNITYSDK_OFFSET(0xDA1B620)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1B8E0)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_GFDMFCJIHHD_OFFSET UNITYSDK_OFFSET(0xDA1B730)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_INIT_OFFSET UNITYSDK_OFFSET(0xDA1B420)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_ONUNLOADMODEL_OFFSET UNITYSDK_OFFSET(0xDA1B530)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xDA1B580)
#define RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xDA1B680)

namespace RPG::Client
{
	class OverrideControllerSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Overrides; // 0x18
		::System::Boolean DLGFMPNEHGO; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x28
		::UnityEngine::RuntimeAnimatorController* MDEAONCJEDI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_INIT_OFFSET))(this);
		}

		::System::Void OnUnloadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_ONUNLOADMODEL_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void SwitchTo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_SWITCHTO_OFFSET))(this, a1);
		}

		::UnityEngine::RuntimeAnimatorController* GFDMFCJIHHD(::System::String* a1)
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_GFDMFCJIHHD_OFFSET))(this, a1);
		}

		::System::Void CLBGGIKNLLF(::UnityEngine::RuntimeAnimatorController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDECONTROLLERSWITCHER_CLBGGIKNLLF_OFFSET))(this, a1);
		}

	};
}
