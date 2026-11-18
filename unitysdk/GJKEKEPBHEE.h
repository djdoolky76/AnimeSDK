#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GJKEKEPBHEE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CF3630)

inline static constexpr unsigned int GJKEKEPBHEE_TypeDefinitionIndex = 89613;

class GJKEKEPBHEE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BOKMCEOIGFB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GJKEKEPBHEE_TypeDefinitionIndex)->GetStaticField(0x49C40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJKEKEPBHEE__CCTOR_OFFSET))();
	}
};
