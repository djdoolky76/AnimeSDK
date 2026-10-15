#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCharacterDisableHitBox; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399230)
#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D399240)
#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3991F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterDisableHitBox_TypeDefinitionIndex = 22400;

	class AdvCharacterDisableHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean AffectMainCollider; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterDisableHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterDisableHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterDisableHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterDisableHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
