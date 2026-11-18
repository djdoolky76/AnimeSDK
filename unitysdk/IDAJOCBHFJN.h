#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IDAJOCBHFJN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16564B20)

inline static constexpr unsigned int IDAJOCBHFJN_TypeDefinitionIndex = 72295;

class IDAJOCBHFJN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KIDHMHCJBBP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IDAJOCBHFJN_TypeDefinitionIndex)->GetStaticField(0x51490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDAJOCBHFJN__CCTOR_OFFSET))();
	}
};
