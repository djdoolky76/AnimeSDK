#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterEmoConfig; }
namespace RPG::GameCore { class CharacterEmoContextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D542700)
#define RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D541600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEmoContextConfig_TypeDefinitionIndex = 16514;

	class CharacterEmoContextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EmoDefaultName; // 0x10
		::System::String* EmoBlinkName; // 0x18
		::System::String* EmoStunName; // 0x20
		::System::String* EmoHitName; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterEmoConfig*>* Configs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEmoContextConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEmoContextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREMOCONTEXTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
