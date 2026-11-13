#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
class FCOEMCEDLNL;
class GOOGNAIABBN;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define GOOGNAIABBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8600)
#define GOOGNAIABBN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9C8610)
#define GOOGNAIABBN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9C85D0)

inline static constexpr unsigned int GOOGNAIABBN_TypeDefinitionIndex = 21737;

	class GOOGNAIABBN : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* GLGKAHCEPIL; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityEffectConfig* HPBAMMEFDMK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGNAIABBN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GOOGNAIABBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOOGNAIABBN*))((::PBYTE)hIl2Cpp + GOOGNAIABBN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GOOGNAIABBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOOGNAIABBN*))((::PBYTE)hIl2Cpp + GOOGNAIABBN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
