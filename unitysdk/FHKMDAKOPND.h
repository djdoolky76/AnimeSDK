#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FHKMDAKOPND__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E630E0)

inline static constexpr unsigned int FHKMDAKOPND_TypeDefinitionIndex = 41299;

class FHKMDAKOPND : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GJBNFNFAFBB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FHKMDAKOPND_TypeDefinitionIndex)->GetStaticField(0x51E50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHKMDAKOPND__CCTOR_OFFSET))();
	}
};
