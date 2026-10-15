#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueLoadingPage; }

#define RPG_GAMECORE_SHOWROGUELOADINGPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5E00)
#define RPG_GAMECORE_SHOWROGUELOADINGPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB5E10)
#define RPG_GAMECORE_SHOWROGUELOADINGPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB5D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueLoadingPage_TypeDefinitionIndex = 20809;

	class ShowRogueLoadingPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueLoadingPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueLoadingPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueLoadingPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueLoadingPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
