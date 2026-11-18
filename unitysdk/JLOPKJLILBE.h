#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define JLOPKJLILBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47CE90)

inline static constexpr unsigned int JLOPKJLILBE_TypeDefinitionIndex = 73677;

class JLOPKJLILBE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOPKJLILBE__CTOR_OFFSET))(this);
	}
};
