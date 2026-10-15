#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9C1A0)
#define RPG_GAMECORE_SETCHARACTERVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9C1B0)
#define RPG_GAMECORE_SETCHARACTERVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisible_TypeDefinitionIndex = 20605;

	class SetCharacterVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean Visible; // 0x28
		::System::Boolean MuteColliderWhenInvisible; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
