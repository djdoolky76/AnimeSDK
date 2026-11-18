#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCMMJHEBNAJ.h"
#include "unitysdk/HCOICJANAGG_POJHFHLEJED.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangePieceInfo_ServerInfo_TypeDefinitionIndex = 68910;

	struct alignas(8) ChessBoardChangePieceInfo_ServerInfo
	{
		::System::Int32 Index; // 0x10
		::MoleMole::FlowCanvas::Optional_1<::System::Int32> EventID; // 0x14
		::MoleMole::FlowCanvas::Optional_1<::IKACJBCOKJI> Flag; // 0x1C
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeState> NodeState; // 0x24
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeVisible> VisibleState; // 0x2C
		::MoleMole::FlowCanvas::Optional_1<::DCMMJHEBNAJ> GridType; // 0x34
		::HCOICJANAGG_POJHFHLEJED ChangeType; // 0x3C
	};
}
