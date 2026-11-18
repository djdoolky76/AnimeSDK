#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PCFOPKCPBPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17313CC0)

inline static constexpr unsigned int PCFOPKCPBPM_TypeDefinitionIndex = 60259;

class PCFOPKCPBPM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BMIPLHHNGDC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PCFOPKCPBPM_TypeDefinitionIndex)->GetStaticField(0x4FE20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFOPKCPBPM__CCTOR_OFFSET))();
	}
};
