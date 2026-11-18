#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPKOIBMDLAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x140CEBE0)

inline static constexpr unsigned int HPKOIBMDLAO_TypeDefinitionIndex = 39781;

class HPKOIBMDLAO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BAHOAMBNHKA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HPKOIBMDLAO_TypeDefinitionIndex)->GetStaticField(0x51F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKOIBMDLAO__CCTOR_OFFSET))();
	}
};
