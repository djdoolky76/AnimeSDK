#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPEYELOOKATDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CD590)

namespace RPGTools::Timeline
{
	class CharacterStopEyeLookAtData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* CurveName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPEYELOOKATDATA_CTOR_OFFSET))(this);
		}

	};
}
