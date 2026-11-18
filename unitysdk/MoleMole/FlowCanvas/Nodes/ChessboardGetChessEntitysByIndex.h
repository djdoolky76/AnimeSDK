#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BBD20)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BBE30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardGetChessEntitysByIndex_TypeDefinitionIndex = 70064;

	class ChessboardGetChessEntitysByIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* Invoke(::System::Int32 index)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDGETCHESSENTITYSBYINDEX_INVOKE_OFFSET))(this, index);
		}
	};
}
