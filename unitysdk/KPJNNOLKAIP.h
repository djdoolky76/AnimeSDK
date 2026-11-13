#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KPJNNOLKAIP_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0x1912AFB0)

inline static constexpr unsigned int KPJNNOLKAIP_TypeDefinitionIndex = 79860;

	class KPJNNOLKAIP : public ::System::Object
	{
	public:
		static ::System::Single ACGBIOICLEO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KPJNNOLKAIP_ACGBIOICLEO_OFFSET))(a1, a2, a3);
		}

	};
