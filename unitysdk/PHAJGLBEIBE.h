#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHAJGLBEIBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B9D3B0)

inline static constexpr unsigned int PHAJGLBEIBE_TypeDefinitionIndex = 54608;

class PHAJGLBEIBE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AJEAFOIMMOI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PHAJGLBEIBE_TypeDefinitionIndex)->GetStaticField(0x3FBC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHAJGLBEIBE__CCTOR_OFFSET))();
	}
};
