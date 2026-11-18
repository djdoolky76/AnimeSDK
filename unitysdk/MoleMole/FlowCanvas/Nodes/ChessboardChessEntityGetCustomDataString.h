#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BB4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BB530)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardChessEntityGetCustomDataString_TypeDefinitionIndex = 92068;

	class ChessboardChessEntityGetCustomDataString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::ChessEntity* chessEntity, ::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCHESSENTITYGETCUSTOMDATASTRING_INVOKE_OFFSET))(this, chessEntity, key);
		}
	};
}
