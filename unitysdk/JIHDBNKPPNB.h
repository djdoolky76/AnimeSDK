#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JIHDBNKPPNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1557D1B0)

inline static constexpr unsigned int JIHDBNKPPNB_TypeDefinitionIndex = 83772;

class JIHDBNKPPNB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NCKGHCAMJLN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JIHDBNKPPNB_TypeDefinitionIndex)->GetStaticField(0x4BCB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIHDBNKPPNB__CCTOR_OFFSET))();
	}
};
