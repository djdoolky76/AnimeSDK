#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POJNBBCPDIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x119A5820)

inline static constexpr unsigned int POJNBBCPDIK_TypeDefinitionIndex = 68900;

class POJNBBCPDIK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PLFHOGCGOMC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(POJNBBCPDIK_TypeDefinitionIndex)->GetStaticField(0x42A60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POJNBBCPDIK__CCTOR_OFFSET))();
	}
};
