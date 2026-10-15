#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_STORY_EDITORPERFORMANCECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8CD0)

namespace RPGTools::Story
{
	class EditorPerformanceCharacterConfig : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_EDITORPERFORMANCECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
