#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEPACPCIOHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CEAE10)

inline static constexpr unsigned int HEPACPCIOHP_TypeDefinitionIndex = 39042;

class HEPACPCIOHP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FNEJEHKDHIK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HEPACPCIOHP_TypeDefinitionIndex)->GetStaticField(0x37AF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEPACPCIOHP__CCTOR_OFFSET))();
	}
};
