#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeferCreateTrialPlayer; }

#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FA6A0)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FA6B0)
#define RPG_GAMECORE_DEFERCREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FA670)

namespace RPG::GameCore
{
	class DeferCreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialPlayerIDList; // 0x18
		::System::Boolean MarkCostBP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeferCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeferCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFERCREATETRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
