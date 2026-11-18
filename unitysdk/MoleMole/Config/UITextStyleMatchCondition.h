#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACOFDELIMO.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_UITEXTSTYLEMATCHCONDITION_GET_MATCHFONTNAME_OFFSET UNITYSDK_OFFSET(0x786070)
#define MOLEMOLE_CONFIG_UITEXTSTYLEMATCHCONDITION_GET_MATCHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x7860C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITextStyleMatchCondition_TypeDefinitionIndex = 39588;

	struct alignas(8) UITextStyleMatchCondition
	{
		::AACOFDELIMO matchMask; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* fontName; // 0x18
		::MoleMole::LanguageType languageType; // 0x20

		::System::Boolean get_MatchFontName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEMATCHCONDITION_GET_MATCHFONTNAME_OFFSET))(this);
		}

		::System::Boolean get_MatchLanguage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEMATCHCONDITION_GET_MATCHLANGUAGE_OFFSET))(this);
		}
	};
}
