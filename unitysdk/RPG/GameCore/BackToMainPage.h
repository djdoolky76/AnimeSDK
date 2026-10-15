#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackToMainPage; }

#define RPG_GAMECORE_BACKTOMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4384E0)
#define RPG_GAMECORE_BACKTOMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4384F0)
#define RPG_GAMECORE_BACKTOMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4384B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackToMainPage_TypeDefinitionIndex = 24372;

	class BackToMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Delay; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BackToMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BackToMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BackToMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BackToMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKTOMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
