#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBDBOEFPEEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D51C40)

inline static constexpr unsigned int DBDBOEFPEEP_TypeDefinitionIndex = 78296;

class DBDBOEFPEEP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GIDIDMEBKIH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DBDBOEFPEEP_TypeDefinitionIndex)->GetStaticField(0x40430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDBOEFPEEP__CCTOR_OFFSET))();
	}
};
