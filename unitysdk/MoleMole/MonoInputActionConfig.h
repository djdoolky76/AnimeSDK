#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOINPUTACTIONCONFIG_GETLISTENINPUTACTIONEVENTS_OFFSET UNITYSDK_OFFSET(0x14699550)
#define MOLEMOLE_MONOINPUTACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146995E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputActionConfig_TypeDefinitionIndex = 67010;

	class MonoInputActionConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IdenticalToAllPlatforms; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* ListenInputActionEvents; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* PlatformListenInputActionEvents; // 0x28
		::UnityEngine::Transform* KeyPanelRoot; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTACTIONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* GetListenInputActionEvents(::MoleMole::EUILayoutPlatform GDLOCGDAJGL)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*(*)(::PVOID, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTACTIONCONFIG_GETLISTENINPUTACTIONEVENTS_OFFSET))(this, GDLOCGDAJGL);
		}
	};
}
