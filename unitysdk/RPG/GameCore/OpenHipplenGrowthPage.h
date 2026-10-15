#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenHipplenGrowthPage; }

#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E1730)
#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E1740)
#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E1670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenHipplenGrowthPage_TypeDefinitionIndex = 21313;

	class OpenHipplenGrowthPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenHipplenGrowthPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenHipplenGrowthPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenHipplenGrowthPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenHipplenGrowthPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
