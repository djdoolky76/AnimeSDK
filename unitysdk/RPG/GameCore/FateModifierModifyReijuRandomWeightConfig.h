#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierModifyReijuRandomWeightConfig; }

#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A81D0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A81E0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A8190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyReijuRandomWeightConfig_TypeDefinitionIndex = 19471;

	class FateModifierModifyReijuRandomWeightConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyReijuRandomWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYREIJURANDOMWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
