#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EBPDNFPPGAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x148C4E50)

inline static constexpr unsigned int EBPDNFPPGAI_TypeDefinitionIndex = 83706;

class EBPDNFPPGAI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GKGDBPNONPL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EBPDNFPPGAI_TypeDefinitionIndex)->GetStaticField(0x3AA90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPDNFPPGAI__CCTOR_OFFSET))();
	}
};
