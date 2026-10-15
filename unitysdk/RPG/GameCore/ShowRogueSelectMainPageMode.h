#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowRogueSelectMainPageModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowRogueSelectMainPageMode; }

#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5F10)
#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB5F20)
#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB5ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueSelectMainPageMode_TypeDefinitionIndex = 24304;

	class ShowRogueSelectMainPageMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ShowRogueSelectMainPageModeType Mode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueSelectMainPageMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowRogueSelectMainPageMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
