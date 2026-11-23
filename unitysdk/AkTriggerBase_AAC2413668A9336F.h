#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERBASE_AAC2413668A9336F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define AKTRIGGERBASE_AAC2413668A9336F__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int AkTriggerBase_AAC2413668A9336F_TypeDefinitionIndex = 20474;

class AkTriggerBase_AAC2413668A9336F : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_AAC2413668A9336F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_AAC2413668A9336F_INVOKE_OFFSET))(this, AACD1FD78C470A3F);
	}
};
