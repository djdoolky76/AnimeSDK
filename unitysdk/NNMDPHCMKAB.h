#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNMDPHCMKAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DACC20)

inline static constexpr unsigned int NNMDPHCMKAB_TypeDefinitionIndex = 79953;

class NNMDPHCMKAB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FGBJFNPFGLI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NNMDPHCMKAB_TypeDefinitionIndex)->GetStaticField(0x4C6F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNMDPHCMKAB__CCTOR_OFFSET))();
	}
};
