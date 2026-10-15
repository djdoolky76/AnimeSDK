#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectAnimatorState; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA811C0)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA811D0)
#define RPG_GAMECORE_SETEFFECTANIMATORSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorState_TypeDefinitionIndex = 23748;

	class SetEffectAnimatorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::String* StateName; // 0x20
		::System::Single TransitionDuration; // 0x28
		::System::Boolean CanReplay; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
