#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POKLIMNHDKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C670470)

inline static constexpr unsigned int POKLIMNHDKK_TypeDefinitionIndex = 82274;

class POKLIMNHDKK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PALONBLPJHF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(POKLIMNHDKK_TypeDefinitionIndex)->GetStaticField(0x363C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POKLIMNHDKK__CCTOR_OFFSET))();
	}
};
