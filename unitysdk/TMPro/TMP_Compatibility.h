#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TextAlignmentOptions.h"

#define TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET UNITYSDK_OFFSET(0x2059B5C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Compatibility_TypeDefinitionIndex = 45623;

	class TMP_Compatibility : public ::System::Object
	{
	public:
		static ::TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions a1)
		{
			return ((::TMPro::TextAlignmentOptions(*)(::TMPro::TextAlignmentOptions))((::PBYTE)hIl2Cpp + TMPRO_TMP_COMPATIBILITY_CONVERTTEXTALIGNMENTENUMVALUES_OFFSET))(a1);
		}

	};
}
