#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFMDPDMMDMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x135462A0)

inline static constexpr unsigned int EFMDPDMMDMC_TypeDefinitionIndex = 53632;

class EFMDPDMMDMC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CDFEONLPNDN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EFMDPDMMDMC_TypeDefinitionIndex)->GetStaticField(0x50760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFMDPDMMDMC__CCTOR_OFFSET))();
	}
};
