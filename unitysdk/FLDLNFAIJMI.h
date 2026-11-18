#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPAHOMDFCEH.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLDLNFAIJMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EED10)

inline static constexpr unsigned int FLDLNFAIJMI_TypeDefinitionIndex = 34118;

class FLDLNFAIJMI : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::DPAHOMDFCEH>** StaticGet_HPKOKEMCNHB()
	{
		return (::System::Collections::Generic::List_1<::DPAHOMDFCEH>**)Il2CppClass::FromTypeDefinitionIndex(FLDLNFAIJMI_TypeDefinitionIndex)->GetStaticField(0x2A0B0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_NJPPLPNCLHD()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FLDLNFAIJMI_TypeDefinitionIndex)->GetStaticField(0x2A0B8);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_MGOOLIADOHG()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(FLDLNFAIJMI_TypeDefinitionIndex)->GetStaticField(0x2A0C0);
	}
	static ::System::Collections::Generic::List_1<::DPAHOMDFCEH>** StaticGet_PCGEHMJPLLM()
	{
		return (::System::Collections::Generic::List_1<::DPAHOMDFCEH>**)Il2CppClass::FromTypeDefinitionIndex(FLDLNFAIJMI_TypeDefinitionIndex)->GetStaticField(0x2A0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDLNFAIJMI__CCTOR_OFFSET))();
	}
};
