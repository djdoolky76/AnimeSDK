#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPJLFJCENCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B5E180)

inline static constexpr unsigned int JPJLFJCENCH_TypeDefinitionIndex = 93042;

class JPJLFJCENCH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DPGPIEACGLB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JPJLFJCENCH_TypeDefinitionIndex)->GetStaticField(0x32720);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPJLFJCENCH__CCTOR_OFFSET))();
	}
};
