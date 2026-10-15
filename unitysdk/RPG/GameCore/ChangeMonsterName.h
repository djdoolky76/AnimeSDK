#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeMonsterName; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEMONSTERNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D567AB0)
#define RPG_GAMECORE_CHANGEMONSTERNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D567AC0)
#define RPG_GAMECORE_CHANGEMONSTERNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567A80)

namespace RPG::GameCore
{
	class ChangeMonsterName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* NameFromTarget; // 0x20
		::RPG::Client::TextID OverrideName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
