#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDIHDEEBADA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x10418CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10418CE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster_OnEntityReadyContext_TypeDefinitionIndex = 47381;

	class LDWaveMonster_OnEntityReadyContext : public ::System::Object
	{
	public:
		::IDIHDEEBADA _postReadyConfig; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* _payload; // 0x20

		::System::Void _ctor(::MoleMole::FlowCanvas::Nodes::LDWaveMonster* payload, ::IDIHDEEBADA postReadyConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster*, ::IDIHDEEBADA))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT__CTOR_OFFSET))(this, payload, postReadyConfig);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT_ONENTITYREADY_OFFSET))(this, entity);
		}
	};
}
