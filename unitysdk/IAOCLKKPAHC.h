#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IAOCLKKPAHC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E9A4C0)

inline static constexpr unsigned int IAOCLKKPAHC_TypeDefinitionIndex = 47589;

class IAOCLKKPAHC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LEGLMNDNOMD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IAOCLKKPAHC_TypeDefinitionIndex)->GetStaticField(0x37C60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOCLKKPAHC__CCTOR_OFFSET))();
	}
};
