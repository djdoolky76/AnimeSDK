#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_COMICSPLITSCREENINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF197C0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicSplitScreenInfo_TypeDefinitionIndex = 32198;

	class ComicSplitScreenInfo : public ::System::Object
	{
	public:
		::System::String* styleKey; // 0x10
		::System::Int32 animIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSPLITSCREENINFO__CTOR_OFFSET))(this);
		}
	};
}
