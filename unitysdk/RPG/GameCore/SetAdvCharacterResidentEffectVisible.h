#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAdvCharacterResidentEffectVisible; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA55A0)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA55B0)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA5570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvCharacterResidentEffectVisible_TypeDefinitionIndex = 22810;

	class SetAdvCharacterResidentEffectVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
