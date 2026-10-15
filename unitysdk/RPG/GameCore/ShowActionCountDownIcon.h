#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowActionCountDownIcon; }

#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6190)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD61A0)
#define RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowActionCountDownIcon_TypeDefinitionIndex = 23696;

	class ShowActionCountDownIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ActionIndex; // 0x18
		::System::UInt32 StageBattleEventId; // 0x1C
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONCOUNTDOWNICON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
