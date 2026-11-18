#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGDBGKKCJIG_BIIGMJMGEJI_OFFSET UNITYSDK_OFFSET(0x11503750)

inline static constexpr unsigned int BGDBGKKCJIG_TypeDefinitionIndex = 43367;

class BGDBGKKCJIG : public ::System::Object
{
public:
	static ::System::Boolean BIIGMJMGEJI(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single IJPJAMNLKBJ)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGDBGKKCJIG_BIIGMJMGEJI_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, IJPJAMNLKBJ);
	}
};
