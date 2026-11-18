#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DFA20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x139DFC00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTransferEntityByVector3_TypeDefinitionIndex = 84833;

	class LDTransferEntityByVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 targetVector)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYBYVECTOR3_INVOKE_OFFSET))(this, entity, targetVector);
		}
	};
}
