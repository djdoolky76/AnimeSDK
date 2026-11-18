#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DF8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139DF970)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetMonsterTeamNode_TypeDefinitionIndex = 70956;

	class LDSetMonsterTeamNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::MoleMole::Config::CampType Team, ::System::Boolean notifyHUD)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::CampType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETMONSTERTEAMNODE_INVOKE_OFFSET))(this, entity, Team, notifyHUD);
		}
	};
}
