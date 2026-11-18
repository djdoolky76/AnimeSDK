#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOACKGHKKCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC28D0)

inline static constexpr unsigned int DOACKGHKKCM_TypeDefinitionIndex = 52729;

class DOACKGHKKCM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EFOCANMKLMA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DOACKGHKKCM_TypeDefinitionIndex)->GetStaticField(0x4CD90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOACKGHKKCM__CCTOR_OFFSET))();
	}
};
