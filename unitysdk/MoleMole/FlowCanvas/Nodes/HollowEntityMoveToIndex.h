#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x13565820)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKES_OFFSET UNITYSDK_OFFSET(0x13565C80)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x13565740)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x13565D00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityMoveToIndex_TypeDefinitionIndex = 48979;

	class HollowEntityMoveToIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKE_OFFSET))(this, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeS(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYMOVETOINDEX_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
