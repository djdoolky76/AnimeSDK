#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetRogueRoomFinish; }

#define RPG_GAMECORE_SETROGUEROOMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD2CF0)
#define RPG_GAMECORE_SETROGUEROOMFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECD2D00)
#define RPG_GAMECORE_SETROGUEROOMFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECD2CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRogueRoomFinish_TypeDefinitionIndex = 20818;

	class SetRogueRoomFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRogueRoomFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRogueRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRogueRoomFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRogueRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEROOMFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
