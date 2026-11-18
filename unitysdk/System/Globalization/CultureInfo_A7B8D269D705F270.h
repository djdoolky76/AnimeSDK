#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CULTUREINFO_A7B8D269D705F270_GET_INVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x20073540)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_A7B8D269D705F270_TypeDefinitionIndex = 31162;

	class CultureInfo_A7B8D269D705F270 : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo_A7B8D269D705F270* get_InvariantCulture()
		{
			return ((::System::Globalization::CultureInfo_A7B8D269D705F270*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_A7B8D269D705F270_GET_INVARIANTCULTURE_OFFSET))();
		}
	};
}
