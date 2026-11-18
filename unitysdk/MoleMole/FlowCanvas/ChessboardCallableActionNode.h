#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

class FBAMLABJMKF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0x146594F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x146593E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14659600)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCallableActionNode_TypeDefinitionIndex = 54073;

	class ChessboardCallableActionNode : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::FBAMLABJMKF* get_CurrentChessboard()
		{
			return ((::FBAMLABJMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCALLABLEACTIONNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
