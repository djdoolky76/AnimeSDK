#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGOLIAGNILN__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB8A7F0)

inline static constexpr unsigned int OGOLIAGNILN_TypeDefinitionIndex = 88136;

class OGOLIAGNILN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NPLDCCHIGBL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OGOLIAGNILN_TypeDefinitionIndex)->GetStaticField(0x51AD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGOLIAGNILN__CCTOR_OFFSET))();
	}
};
