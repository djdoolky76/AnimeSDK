#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRotatableRegionLoadFinish; }

#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC73490)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC734A0)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC733D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionLoadFinish_TypeDefinitionIndex = 20916;

	class WaitRotatableRegionLoadFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
