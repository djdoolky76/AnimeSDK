#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAA3FC923E15A088_FD9B6386A4ECD492_OFFSET UNITYSDK_OFFSET(0x22AAA30)

inline static constexpr unsigned int BAA3FC923E15A088_TypeDefinitionIndex = 7056;

class BAA3FC923E15A088 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BF453A2DE7377BFA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BAA3FC923E15A088_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 FD9B6386A4ECD492()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BAA3FC923E15A088_FD9B6386A4ECD492_OFFSET))();
	}
};
