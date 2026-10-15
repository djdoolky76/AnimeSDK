#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareHeartDialScriptStep; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D487EF0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D488120)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4880F0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D487F00)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D487EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialScriptStep_TypeDefinitionIndex = 21895;

	class ByCompareHeartDialScriptStep : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x20
		::RPG::GameCore::HeartDialStepType Step; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
