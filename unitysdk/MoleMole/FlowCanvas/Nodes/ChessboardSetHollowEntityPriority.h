#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C6220)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x130C6350)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardSetHollowEntityPriority_TypeDefinitionIndex = 63321;

	class ChessboardSetHollowEntityPriority
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityid, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETHOLLOWENTITYPRIORITY_INVOKE_OFFSET))(this, entityid, priority);
		}
	};
}
