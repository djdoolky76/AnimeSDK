#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EILAFKJIKNE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9D20B0)

inline static constexpr unsigned int EILAFKJIKNE_TypeDefinitionIndex = 54335;

class EILAFKJIKNE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LIGADKIOINM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EILAFKJIKNE_TypeDefinitionIndex)->GetStaticField(0xA4F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILAFKJIKNE__CCTOR_OFFSET))();
	}
};
