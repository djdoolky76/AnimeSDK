#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_CHECKRENDERSTATEENABLE_OFFSET UNITYSDK_OFFSET(0x1622F710)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_GET_RENDERDATAHANDLELIST_OFFSET UNITYSDK_OFFSET(0x1622F600)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1622F9F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1622FE30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimV2_TypeDefinitionIndex = 57704;

	class ChessboardIconAnimV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* get_RenderDataHandleList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_GET_RENDERDATAHANDLELIST_OFFSET))(this);
		}

		::System::Boolean CheckRenderStateEnable(::MoleMole::HollowChessboard::HollowChessboardUID sectionID, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_CHECKRENDERSTATEENABLE_OFFSET))(this, sectionID, cell);
		}

		::MoleMole::HollowChessboard::RenderDataHandle Invoke(::System::Int32 index, ::System::Collections::Generic::List_1<::System::Object*>* chessBoardIconAnimGroup)
		{
			return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_INVOKE_OFFSET))(this, index, chessBoardIconAnimGroup);
		}
	};
}
