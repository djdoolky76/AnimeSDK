#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFHINJKKGPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F62A60)

inline static constexpr unsigned int IFHINJKKGPO_TypeDefinitionIndex = 79860;

class IFHINJKKGPO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BFJKHLDPAFO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IFHINJKKGPO_TypeDefinitionIndex)->GetStaticField(0x3E050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFHINJKKGPO__CCTOR_OFFSET))();
	}
};
