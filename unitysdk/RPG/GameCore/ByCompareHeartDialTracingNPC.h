#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareHeartDialTracingNPC; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6BB0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CDF6D30)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CDF6D00)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDF6BC0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF6B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialTracingNPC_TypeDefinitionIndex = 22289;

	class ByCompareHeartDialTracingNPC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
