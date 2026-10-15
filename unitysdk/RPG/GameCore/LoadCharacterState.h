#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadCharacterState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOADCHARACTERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC420)
#define RPG_GAMECORE_LOADCHARACTERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BC470)
#define RPG_GAMECORE_LOADCHARACTERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadCharacterState_TypeDefinitionIndex = 22757;

	class LoadCharacterState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SaveKey; // 0x20
		::System::Boolean RemoveUnrecordedStatus; // 0x28
		::System::Boolean DeleteRecord; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADCHARACTERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
