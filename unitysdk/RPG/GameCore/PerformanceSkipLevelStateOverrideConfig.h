#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSkipLevelStateOverrideConfig; }
namespace RPG::GameCore { class PerformanceSkipLevelStateOverrideItem; }

#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D6A60)
#define RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D6970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipLevelStateOverrideConfig_TypeDefinitionIndex = 19044;

	class PerformanceSkipLevelStateOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceSkipLevelStateOverrideItem*>* Items; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSkipLevelStateOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSkipLevelStateOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPLEVELSTATEOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
