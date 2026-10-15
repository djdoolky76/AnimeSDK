#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamagePerformFinish.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamagePerformFinishOnScepter; }

#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C3550)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C3560)
#define RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C3700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamagePerformFinishOnScepter_TypeDefinitionIndex = 23102;

	class DamagePerformFinishOnScepter : public ::RPG::GameCore::DamagePerformFinish
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamagePerformFinishOnScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamagePerformFinishOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamagePerformFinishOnScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamagePerformFinishOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEPERFORMFINISHONSCEPTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
