#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FieldEffectBudgetConfig; }
namespace RPG::GameCore { class FieldEffectHighPriorityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0D90)
#define RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A0B00)

namespace RPG::GameCore
{
	class FieldEffectBudgetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* SingleFieldEffectBudget; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityType, ::System::Int32>* EntityTypeToGuaranteedCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::RPG::GameCore::FieldEffectHighPriorityList*>* StageHighPriorityEffectList; // 0x20
		::System::Single HighQualityTotalBudgetLod0; // 0x28
		::System::Single HighQualityTotalBudgetLod1; // 0x2C
		::System::Single LowQualityTotalBudgetLod1; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FieldEffectBudgetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FieldEffectBudgetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTBUDGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
