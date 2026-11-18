#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C5EB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x130C6000)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCreateEntity_TypeDefinitionIndex = 60552;

	class ChessboardCreateEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITY__CTOR_OFFSET))(this);
		}

		::MoleMole::ChessEntity* Invoke(::System::String* entityKey, ::System::Int32 index, ::MoleMole::ChessEntityCollection* entityMap)
		{
			return ((::MoleMole::ChessEntity*(*)(::PVOID, ::System::String*, ::System::Int32, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCREATEENTITY_INVOKE_OFFSET))(this, entityKey, index, entityMap);
		}
	};
}
