#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x1244A230)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET UNITYSDK_OFFSET(0x1244A690)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244A150)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1244A710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityMoveToPosition_TypeDefinitionIndex = 73584;

	class HollowEntityMoveToPosition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKE_OFFSET))(this, entityRuntimeID, x, y);
		}

		static ::System::Void InvokeS(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOPOSITION_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
