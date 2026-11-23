#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3120B95DAD70F5B/E246A79D4FF87F3C.h"
#include "unitysdk/E68AA4EB51923C98/E4B55EE0EC5CC11E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace System { class String; }

#define ABC_TEXTMAP_TEXTMAPIDSELECTOR_GETTEXT_1_OFFSET UNITYSDK_OFFSET(0x1F3B070)
#define ABC_TEXTMAP_TEXTMAPIDSELECTOR_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1F3B100)
#define ABC_TEXTMAP_TEXTMAPIDSELECTOR_SETTEXTMAP_OFFSET UNITYSDK_OFFSET(0x1F3B180)
#define ABC_TEXTMAP_TEXTMAPIDSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::TextMap
{
	inline static constexpr unsigned int TextMapIDSelector_TypeDefinitionIndex = 7608;

	class TextMapIDSelector : public ::System::Object
	{
	public:
		::System::String* TextMapID; // 0x10
		::System::UInt64 TextMapHashID; // 0x18
		::B3120B95DAD70F5B::E246A79D4FF87F3C SetType; // 0x20

		::System::String* SetTextMap(::AD61077CFCBEFAEA BFECAC49B767D238)
		{
			return ((::System::String*(*)(::PVOID, ::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + ABC_TEXTMAP_TEXTMAPIDSELECTOR_SETTEXTMAP_OFFSET))(this, BFECAC49B767D238);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TEXTMAP_TEXTMAPIDSELECTOR__CTOR_OFFSET))(this);
		}

		::System::String* GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TEXTMAP_TEXTMAPIDSELECTOR_GETTEXT_OFFSET))(this);
		}

		::System::String* GetText_1(::E68AA4EB51923C98::E4B55EE0EC5CC11E E12C54348FF6AA6D)
		{
			return ((::System::String*(*)(::PVOID, ::E68AA4EB51923C98::E4B55EE0EC5CC11E))((::PBYTE)hIl2Cpp + ABC_TEXTMAP_TEXTMAPIDSELECTOR_GETTEXT_1_OFFSET))(this, E12C54348FF6AA6D);
		}
	};
}
