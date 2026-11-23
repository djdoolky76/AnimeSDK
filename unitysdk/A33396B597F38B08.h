#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeType.h"
#include "unitysdk/E2DE926113CB084F.h"

#define A33396B597F38B08_EFD784DD4C62AB8B_OFFSET UNITYSDK_OFFSET(0x3D20B90)
#define A33396B597F38B08__CTOR_OFFSET UNITYSDK_OFFSET(0x3D20B50)

inline static constexpr unsigned int A33396B597F38B08_TypeDefinitionIndex = 10896;

class A33396B597F38B08 : public ::System::RuntimeType
{
public:
	::E2DE926113CB084F EFD784DD4C62AB8B()
	{
		return ((::E2DE926113CB084F(*)(::PVOID))((::PBYTE)hIl2Cpp + A33396B597F38B08_EFD784DD4C62AB8B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A33396B597F38B08__CTOR_OFFSET))(this);
	}
};
