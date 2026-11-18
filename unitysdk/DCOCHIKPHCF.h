#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCOCHIKPHCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1832B700)

inline static constexpr unsigned int DCOCHIKPHCF_TypeDefinitionIndex = 43708;

class DCOCHIKPHCF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DFLACDMHKJO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DCOCHIKPHCF_TypeDefinitionIndex)->GetStaticField(0x51D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCOCHIKPHCF__CCTOR_OFFSET))();
	}
};
