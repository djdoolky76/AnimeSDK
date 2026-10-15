#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLC1Dot3AdventureRoomType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomManage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2B70)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2B80)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3AdventureRoomManage_TypeDefinitionIndex = 22275;

	class RogueDLC1Dot3AdventureRoomManage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3AdventureRoomType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetBoxTrigger; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMMANAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
