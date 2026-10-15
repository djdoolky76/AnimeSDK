#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FilterEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideCharacterFilteredEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73A0B0)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73A0C0)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideCharacterFilteredEffect_TypeDefinitionIndex = 23123;

	class HideCharacterFilteredEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FilterEffectType FilterType; // 0x20
		::System::Boolean AliveOnly; // 0x24
		::System::Boolean IsHide; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
