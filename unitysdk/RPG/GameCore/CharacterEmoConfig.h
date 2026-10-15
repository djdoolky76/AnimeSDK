#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREMOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5426F0)
#define RPG_GAMECORE_CHARACTEREMOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5424F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEmoConfig_TypeDefinitionIndex = 16513;

	class CharacterEmoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* EmoDefaultPath; // 0x18
		::System::String* EmoBlinkPath; // 0x20
		::System::String* EmoStunPath; // 0x28
		::System::String* EmoHitPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEmoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEmoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
