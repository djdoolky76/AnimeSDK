#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class BNGDIDCJFMG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D497D00)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D497F40)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D497F10)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D497D10)
#define RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D497CD0)

namespace RPG::GameCore
{
	class ByCheckTurnCountMatch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 RoundCount; // 0x20
		::RPG::GameCore::TeamType TeamType; // 0x24
		::System::UInt32 TargetID; // 0x28
		::System::Byte _padding0[0x4];
		::BNGDIDCJFMG* OverrideConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTURNCOUNTMATCH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
