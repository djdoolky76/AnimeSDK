#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleBaseEvaluator; }
namespace RPG::GameCore { class ChimeraSetAnimatorParam; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERASETANIMATORPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D580C10)
#define RPG_GAMECORE_CHIMERASETANIMATORPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D580C20)
#define RPG_GAMECORE_CHIMERASETANIMATORPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D580BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraSetAnimatorParam_TypeDefinitionIndex = 15871;

	class ChimeraSetAnimatorParam : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleBaseEvaluator* Target; // 0x18
		::System::String* AnimatorAttachPoint; // 0x20
		::System::String* ParameterName; // 0x28
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x30
		::System::Single Value; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraSetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraSetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraSetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraSetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
