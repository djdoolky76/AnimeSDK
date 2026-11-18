#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMCBLEDICDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1863B0B0)

inline static constexpr unsigned int KMCBLEDICDA_TypeDefinitionIndex = 84654;

class KMCBLEDICDA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PGNIGJCMGPJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KMCBLEDICDA_TypeDefinitionIndex)->GetStaticField(0x51FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCBLEDICDA__CCTOR_OFFSET))();
	}
};
