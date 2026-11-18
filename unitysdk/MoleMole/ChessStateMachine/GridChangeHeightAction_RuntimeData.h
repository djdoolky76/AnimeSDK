#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class DPAFGNEEDDO;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x63CF30)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridChangeHeightAction_RuntimeData_TypeDefinitionIndex = 69287;

	struct alignas(8) GridChangeHeightAction_RuntimeData
	{
		::MoleMole::HollowChessboard::HollowEntity* cacheEntity; // 0x10
		::DPAFGNEEDDO* animEvent; // 0x18

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDCHANGEHEIGHTACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
