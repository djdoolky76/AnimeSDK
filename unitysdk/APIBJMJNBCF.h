#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APIBJMJNBCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D0FB50)

inline static constexpr unsigned int APIBJMJNBCF_TypeDefinitionIndex = 48189;

class APIBJMJNBCF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CLDNGPJDJPF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(APIBJMJNBCF_TypeDefinitionIndex)->GetStaticField(0x45C30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIBJMJNBCF__CCTOR_OFFSET))();
	}
};
