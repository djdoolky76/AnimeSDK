#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_ANIMATIONEVENTNOTIFIER_SENDNOTIFY_OFFSET UNITYSDK_OFFSET(0x177DD4C0)
#define MOLEMOLE_ANIMATIONEVENTNOTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x177DD600)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationEventNotifier_TypeDefinitionIndex = 57816;

	class AnimationEventNotifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTNOTIFIER__CTOR_OFFSET))(this);
		}

		::System::Void SendNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTNOTIFIER_SENDNOTIFY_OFFSET))(this);
		}
	};
}
