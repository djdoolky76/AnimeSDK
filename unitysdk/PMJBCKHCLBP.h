#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMJBCKHCLBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7FEEF0)

inline static constexpr unsigned int PMJBCKHCLBP_TypeDefinitionIndex = 57791;

class PMJBCKHCLBP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EOEAEHMGOAI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PMJBCKHCLBP_TypeDefinitionIndex)->GetStaticField(0x3D000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMJBCKHCLBP__CCTOR_OFFSET))();
	}
};
