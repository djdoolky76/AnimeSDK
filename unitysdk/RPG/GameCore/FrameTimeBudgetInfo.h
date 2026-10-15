#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FrameTimeBudgetInfo; }

#define RPG_GAMECORE_FRAMETIMEBUDGETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4E40)
#define RPG_GAMECORE_FRAMETIMEBUDGETINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C4E70)
#define RPG_GAMECORE_FRAMETIMEBUDGETINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameTimeBudgetInfo_TypeDefinitionIndex = 16464;

	class FrameTimeBudgetInfo : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single AssetMgrTimeMs; // 0x1C
		::System::Single GameObjectPoolTimeMs; // 0x20
		::System::Single GameObjectPoolPreResetTimeMs; // 0x24
		::System::Single StreamingUpdateTimeMs; // 0x28
		::System::Single StreamingLoadTimeMs; // 0x2C
		::System::Single StreamingFadingTimeMs; // 0x30
		::System::Single AdvAsyncProcessorTimeMs; // 0x34
		::System::Single GroupUnloadTimeMs; // 0x38
		::System::Single BattlePreloadPoolRearrangeTimeMs; // 0x3C
		::System::Single SharedTimeMs; // 0x40
		::System::Single MaxExtendTimeMs; // 0x44
		::System::Single FrameExtendTimeMs; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FrameTimeBudgetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FrameTimeBudgetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FrameTimeBudgetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FrameTimeBudgetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMETIMEBUDGETINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
