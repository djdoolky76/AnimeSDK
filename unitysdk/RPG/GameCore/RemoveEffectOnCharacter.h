#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984DE0)
#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984DF0)
#define RPG_GAMECORE_REMOVEEFFECTONCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984DB0)

namespace RPG::GameCore
{
	class RemoveEffectOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEffectOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEffectOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEffectOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEffectOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECTONCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
