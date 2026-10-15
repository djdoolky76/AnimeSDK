#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_CJBOLHFHIOO_OFFSET UNITYSDK_OFFSET(0xE9329C0)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE932A80)

namespace RPGTools::Timeline
{
	class RemoveEffectOnCharacterData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RemoveEffectOnCharacter* CJBOLHFHIOO()
		{
			return ((::RPG::GameCore::RemoveEffectOnCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTONCHARACTERDATA_CJBOLHFHIOO_OFFSET))(this);
		}

	};
}
