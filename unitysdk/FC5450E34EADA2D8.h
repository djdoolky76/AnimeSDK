#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FC5450E34EADA2D8_A29D85F9FBDE96B2_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FC5450E34EADA2D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC5450E34EADA2D8_TypeDefinitionIndex = 21441;

class FC5450E34EADA2D8 : public ::System::Object
{
public:
	::System::String* FC6830DC20A7DAE6; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC5450E34EADA2D8__CTOR_OFFSET))(this);
	}

	::System::String* A29D85F9FBDE96B2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC5450E34EADA2D8_A29D85F9FBDE96B2_OFFSET))(this);
	}
};
