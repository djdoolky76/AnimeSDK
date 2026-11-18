#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3D320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3D790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTransferEntityNode_TypeDefinitionIndex = 50675;

	class LDTransferEntityNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::String* spawnPointName)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRANSFERENTITYNODE_INVOKE_OFFSET))(this, entity, spawnPointName);
		}
	};
}
