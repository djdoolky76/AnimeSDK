#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetModifierEffectVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABA780)
#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABA790)
#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABA750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierEffectVisible_TypeDefinitionIndex = 23632;

	class SetModifierEffectVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRecoverAll; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* HideTargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierEffectVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierEffectVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
