#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }

#define MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D2E30)
#define MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x139D2EA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AddEntityByChessEntity_TypeDefinitionIndex = 70562;

	class AddEntityByChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::MoleMole::ChessEntity* entity, ::MoleMole::ChessEntityCollection* entityMap)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ADDENTITYBYCHESSENTITY_INVOKE_OFFSET))(this, entity, entityMap);
		}
	};
}
