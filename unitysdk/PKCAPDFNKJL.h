#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKCAPDFNKJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BA77C0)

inline static constexpr unsigned int PKCAPDFNKJL_TypeDefinitionIndex = 91939;

class PKCAPDFNKJL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OJKJDDEDHEH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PKCAPDFNKJL_TypeDefinitionIndex)->GetStaticField(0x3FC60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKCAPDFNKJL__CCTOR_OFFSET))();
	}
};
