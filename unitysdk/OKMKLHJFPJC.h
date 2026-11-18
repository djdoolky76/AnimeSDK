#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKMKLHJFPJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7A2C80)

inline static constexpr unsigned int OKMKLHJFPJC_TypeDefinitionIndex = 39052;

class OKMKLHJFPJC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_ALODEOBFCBB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OKMKLHJFPJC_TypeDefinitionIndex)->GetStaticField(0x39D10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMKLHJFPJC__CCTOR_OFFSET))();
	}
};
