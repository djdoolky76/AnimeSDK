#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIKIFKOLDFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14554450)

inline static constexpr unsigned int CIKIFKOLDFG_TypeDefinitionIndex = 48821;

class CIKIFKOLDFG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IMECOMJDKEL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CIKIFKOLDFG_TypeDefinitionIndex)->GetStaticField(0x500B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIKIFKOLDFG__CCTOR_OFFSET))();
	}
};
