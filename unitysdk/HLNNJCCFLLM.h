#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HLNNJCCFLLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5D0E0)

inline static constexpr unsigned int HLNNJCCFLLM_TypeDefinitionIndex = 62186;

class HLNNJCCFLLM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EKLMGGNGFFF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HLNNJCCFLLM_TypeDefinitionIndex)->GetStaticField(0x4F5D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNNJCCFLLM__CCTOR_OFFSET))();
	}
};
