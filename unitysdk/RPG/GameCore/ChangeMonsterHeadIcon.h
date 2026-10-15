#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeMonsterHeadIcon; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEMONSTERHEADICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D567890)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5678A0)
#define RPG_GAMECORE_CHANGEMONSTERHEADICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567860)

namespace RPG::GameCore
{
	class ChangeMonsterHeadIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* IconFromTarget; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* RoundIconPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEMONSTERHEADICON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
