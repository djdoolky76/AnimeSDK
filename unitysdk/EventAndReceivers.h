#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EventAndReceivers_EventType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int EventAndReceivers_TypeDefinitionIndex = 87553;

struct alignas(8) EventAndReceivers
{
	::EventAndReceivers_EventType m_eventType; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::UnityEngine::GameObject*>* m_eventReceivers; // 0x18
};
