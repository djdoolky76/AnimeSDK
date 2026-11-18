#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET UNITYSDK_OFFSET(0x1465B0A0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET UNITYSDK_OFFSET(0x1465B350)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465AFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1465B3D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityJumpToIndex_TypeDefinitionIndex = 39183;

	class HollowEntityJumpToIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKE_OFFSET))(this, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeS(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKES_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}

		static ::System::Void InvokeInner(::FBAMLABJMKF* chessboard, ::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowCell targetIndex)
		{
			return ((::System::Void(*)(::FBAMLABJMKF*, ::System::UInt32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYJUMPTOINDEX_INVOKEINNER_OFFSET))(chessboard, entityRuntimeID, targetIndex);
		}
	};
}
