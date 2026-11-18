#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLLNHIEKPPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A183A0)

inline static constexpr unsigned int CLLNHIEKPPI_TypeDefinitionIndex = 92688;

class CLLNHIEKPPI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NPEBLAGOKOB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CLLNHIEKPPI_TypeDefinitionIndex)->GetStaticField(0x37160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLNHIEKPPI__CCTOR_OFFSET))();
	}
};
