#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DPBHBACAHMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E66270)

inline static constexpr unsigned int DPBHBACAHMP_TypeDefinitionIndex = 88842;

class DPBHBACAHMP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BMNNFBKEOOO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DPBHBACAHMP_TypeDefinitionIndex)->GetStaticField(0x4E350);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBHBACAHMP__CCTOR_OFFSET))();
	}
};
