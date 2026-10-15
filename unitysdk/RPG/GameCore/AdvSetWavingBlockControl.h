#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetWavingBlockControl; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D383D90)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D383DA0)
#define RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D383D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetWavingBlockControl_TypeDefinitionIndex = 22233;

	class AdvSetWavingBlockControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* FloorID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetWavingBlockControl* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetWavingBlockControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETWAVINGBLOCKCONTROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
