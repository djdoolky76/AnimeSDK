#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DA590)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueStartNode_TypeDefinitionIndex = 39939;

	class GalPlayArgueStartNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>* switchPoseList; // 0x20
		::MoleMole::GalGame::GalArgueStageLocation MyTeamLocation; // 0x28
		::System::Int32 leftInitialHealth; // 0x2C
		::System::Int32 rightInitialHealth; // 0x30
		::System::Boolean hideRightHP; // 0x34
		::System::Boolean hideLeftHP; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 leftMaxHealth; // 0x38
		::System::Int32 rightMaxHealth; // 0x3C
		::MoleMole::GalGame::GalArgueGoalMode goalMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE__CTOR_OFFSET))(this);
		}
	};
}
