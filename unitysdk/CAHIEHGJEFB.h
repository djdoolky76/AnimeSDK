#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CAHIEHGJEFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14592A40)

inline static constexpr unsigned int CAHIEHGJEFB_TypeDefinitionIndex = 54253;

class CAHIEHGJEFB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DJDCDOAINDM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CAHIEHGJEFB_TypeDefinitionIndex)->GetStaticField(0x40250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAHIEHGJEFB__CCTOR_OFFSET))();
	}
};
