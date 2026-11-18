#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x10D0B330)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKES_OFFSET UNITYSDK_OFFSET(0x10D0B5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D0B250)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0B660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToPosition_TypeDefinitionIndex = 44968;

	class HollowEntityJumpToPosition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKE_OFFSET))(this, entityRuntimeID, x, y);
		}

		static ::System::Void InvokeS(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOPOSITION_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
