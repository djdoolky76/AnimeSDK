#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPCAGBDLHPE.h"
#include "unitysdk/System/ValueType.h"

#define MLPJDKAFNHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23FE10)

inline static constexpr unsigned int MLPJDKAFNHB_TypeDefinitionIndex = 93939;

struct alignas(4) MLPJDKAFNHB
{
	static ::MLPJDKAFNHB* StaticGet_DDGNFJDLOKA()
	{
		return (::MLPJDKAFNHB*)Il2CppClass::FromTypeDefinitionIndex(MLPJDKAFNHB_TypeDefinitionIndex)->GetStaticField(0x13DF0);
	}
	::MPCAGBDLHPE OEFNMCAHNBN; // 0x10
	::System::Int32 MGHIHNAOJFE; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLPJDKAFNHB__CCTOR_OFFSET))();
	}
};
