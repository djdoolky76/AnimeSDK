#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_REALCALL_OFFSET UNITYSDK_OFFSET(0x130D2CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130D2F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_START_OFFSET UNITYSDK_OFFSET(0x130D3060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x130D3430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTriggerAbilityAtPosition_TypeDefinitionIndex = 87515;

	class LDTriggerAbilityAtPosition : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* handle; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _inputRotation; // 0xB0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _inputPosition; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* _inputEntityHandle; // 0xC0
		::FlowCanvas::FlowOutput* _flowOutputOut; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* _inputAbilityName; // 0xD0
		::UnityEngine::Vector3 outPosition; // 0xD8
		::System::Single leftTime; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void RealCall(::MoleMole::EntityHandle entity, ::System::String* abilityName, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_REALCALL_OFFSET))(entity, abilityName, position, rotation);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERABILITYATPOSITION_START_OFFSET))(this, f);
		}
	};
}
