#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGDHLPHHDAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x116F4760)

inline static constexpr unsigned int GGDHLPHHDAA_TypeDefinitionIndex = 77990;

class GGDHLPHHDAA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NJINFLHNGPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GGDHLPHHDAA_TypeDefinitionIndex)->GetStaticField(0x40A90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGDHLPHHDAA__CCTOR_OFFSET))();
	}
};
