#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedFrameTimeBudgetConfig; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }

#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F00BF30)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F00BF40)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F00C730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFrameTimeBudgetConfig_TypeDefinitionIndex = 16641;

	class DeviceRelatedFrameTimeBudgetConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::FrameTimeBudgetInfo* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
