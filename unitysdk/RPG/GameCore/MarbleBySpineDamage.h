#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBySpineDamage; }

#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F097900)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F097910)
#define RPG_GAMECORE_MARBLEBYSPINEDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0978B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBySpineDamage_TypeDefinitionIndex = 17061;

	class MarbleBySpineDamage : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBySpineDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBySpineDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBySpineDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBySpineDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSPINEDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
