#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHDDFEOAEJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D7B160)

inline static constexpr unsigned int AHDDFEOAEJM_TypeDefinitionIndex = 72381;

class AHDDFEOAEJM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DJFIJEJGGAD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AHDDFEOAEJM_TypeDefinitionIndex)->GetStaticField(0x4FF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDDFEOAEJM__CCTOR_OFFSET))();
	}
};
