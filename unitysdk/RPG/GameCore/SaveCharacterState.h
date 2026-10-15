#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SaveCharacterState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SAVECHARACTERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87D70)
#define RPG_GAMECORE_SAVECHARACTERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA87DD0)
#define RPG_GAMECORE_SAVECHARACTERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA87CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveCharacterState_TypeDefinitionIndex = 22756;

	class SaveCharacterState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SaveKey; // 0x20
		::RPG::GameCore::SaveCharacterStateMask StateMask; // 0x28
		::RPG::GameCore::EnumStatusTypeMask SaveStatusTypeMask; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHARACTERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
