#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReactionAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D576340)
#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5777C0)
#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D577690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReactionAnimConfig_TypeDefinitionIndex = 18200;

	class CharacterReactionAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Hit; // 0x10
		::System::String* HitH; // 0x18
		::System::String* HitFly; // 0x20
		::System::String* HitFlyRecover; // 0x28
		::System::String* FlyHit; // 0x30
		::System::String* Die; // 0x38
		::System::String* DieHit; // 0x40
		::System::String* DieFly; // 0x48
		::System::String* DieLimbo; // 0x50
		::System::Boolean ForceHitH; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single OverrideHitAnimWeight; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
