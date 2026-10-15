#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseRogueMagicUltraUnitSpecialFactor; }
namespace RPG::GameCore { class PassiveUnitEffectTypeMatchFactorConfig; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D52C0)
#define RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9D5090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicPowerConfig_TypeDefinitionIndex = 17928;

	class RogueMagicPowerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ScepterStyleTypeUnMatchFactor; // 0x10
		::System::Single AttachUnitStyleTypeUnMatchFactor; // 0x14
		::System::Single AttachUnitRangeTypeUnMatchFactor; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*>* PassiveUnitEffectTypeMatchFactor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*>* PassiveUltraUnitSpecialFactor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicPowerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicPowerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
