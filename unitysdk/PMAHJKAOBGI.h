#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMAHJKAOBGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1DC9A0)

inline static constexpr unsigned int PMAHJKAOBGI_TypeDefinitionIndex = 79836;

class PMAHJKAOBGI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HCAICLABKGE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PMAHJKAOBGI_TypeDefinitionIndex)->GetStaticField(0x493E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMAHJKAOBGI__CCTOR_OFFSET))();
	}
};
