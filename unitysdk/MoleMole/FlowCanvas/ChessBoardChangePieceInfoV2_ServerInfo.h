#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMMJHEBNAJ.h"
#include "unitysdk/HCOICJANAGG_POJHFHLEJED.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangePieceInfoV2_ServerInfo_TypeDefinitionIndex = 88384;

	struct alignas(8) ChessBoardChangePieceInfoV2_ServerInfo
	{
		::MoleMole::Vector2Int Index; // 0x10
		::MoleMole::FlowCanvas::Optional_1<::System::Int32> EventID; // 0x18
		::MoleMole::FlowCanvas::Optional_1<::IKACJBCOKJI> Flag; // 0x20
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeState> NodeState; // 0x28
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeVisible> VisibleState; // 0x30
		::MoleMole::FlowCanvas::Optional_1<::DCMMJHEBNAJ> GridType; // 0x38
		::HCOICJANAGG_POJHFHLEJED ChangeType; // 0x40
	};
}
