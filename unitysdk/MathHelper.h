#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MATHHELPER_GETDIGITVALUEBYINDEX_OFFSET UNITYSDK_OFFSET(0xFA84140)

inline static constexpr unsigned int MathHelper_TypeDefinitionIndex = 69397;

class MathHelper : public ::System::Object
{
public:
	static ::System::Int32 GetDigitValueByIndex(::System::Int32 data, ::System::Int32 index)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MATHHELPER_GETDIGITVALUEBYINDEX_OFFSET))(data, index);
	}
};
