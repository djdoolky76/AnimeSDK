#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCPPGPJKKAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1523D730)

inline static constexpr unsigned int LCPPGPJKKAP_TypeDefinitionIndex = 87555;

class LCPPGPJKKAP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EKHJBOFPIMC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LCPPGPJKKAP_TypeDefinitionIndex)->GetStaticField(0x468D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCPPGPJKKAP__CCTOR_OFFSET))();
	}
};
