#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALPCFPJMMBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1422BB80)

inline static constexpr unsigned int ALPCFPJMMBI_TypeDefinitionIndex = 49549;

class ALPCFPJMMBI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DAFFMAHAMOI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ALPCFPJMMBI_TypeDefinitionIndex)->GetStaticField(0x47B80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALPCFPJMMBI__CCTOR_OFFSET))();
	}
};
