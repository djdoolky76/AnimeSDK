#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E7090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8E7BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E7D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8E7DB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateMonsterNode_TypeDefinitionIndex = 47100;

	class LDCreateMonsterNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* Invoke(::System::Int32 monsterId, ::System::String* spawnPointName, ::MoleMole::Config::CampType camp, ::MoleMole::FlowCanvas::Nodes::MonsterIDType IDType)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Config::CampType, ::MoleMole::FlowCanvas::Nodes::MonsterIDType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_INVOKE_OFFSET))(this, monsterId, spawnPointName, camp, IDType);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
