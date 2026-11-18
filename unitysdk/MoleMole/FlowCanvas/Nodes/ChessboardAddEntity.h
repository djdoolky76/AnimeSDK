#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465A900)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1465AA60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardAddEntity_TypeDefinitionIndex = 84922;

	class ChessboardAddEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::System::UInt32 id, ::MoleMole::ChessEntityCollection* entityMap, ::System::Boolean skipAddManager)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::UInt32, ::MoleMole::ChessEntityCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDADDENTITY_INVOKE_OFFSET))(this, id, entityMap, skipAddManager);
		}
	};
}
