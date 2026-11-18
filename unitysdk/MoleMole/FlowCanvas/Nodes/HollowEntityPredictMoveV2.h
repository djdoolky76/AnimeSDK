#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVEV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E4250)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E4730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMoveV2_TypeDefinitionIndex = 44921;

	class HollowEntityPredictMoveV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVEV2__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd moveCmd)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::UInt32, ::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYPREDICTMOVEV2_INVOKE_OFFSET))(this, entityRuntimeID, moveCmd);
		}
	};
}
