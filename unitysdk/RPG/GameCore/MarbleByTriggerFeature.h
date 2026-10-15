#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByTriggerFeature; }

#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83BA50)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83BA60)
#define RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83BA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByTriggerFeature_TypeDefinitionIndex = 16881;

	class MarbleByTriggerFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByTriggerFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByTriggerFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByTriggerFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByTriggerFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYTRIGGERFEATURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
