#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETARROWUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A08F0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETARROWUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08F3F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTargetArrowUINode_TypeDefinitionIndex = 53856;

	class LDShowTargetArrowUINode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETARROWUINODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* key, ::MoleMole::EntityHandle entity, ::System::String* attachPoint, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETARROWUINODE_INVOKE_OFFSET))(this, key, entity, attachPoint, offset);
		}
	};
}
