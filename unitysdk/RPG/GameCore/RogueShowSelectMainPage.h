#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueShowSelectMainPage; }

#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EB80)
#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2EB90)
#define RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueShowSelectMainPage_TypeDefinitionIndex = 20807;

	class RogueShowSelectMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueShowSelectMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueShowSelectMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueShowSelectMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueShowSelectMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOWSELECTMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
