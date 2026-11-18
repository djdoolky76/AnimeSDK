#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PCIGAGGOBLD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6AA0)

inline static constexpr unsigned int PCIGAGGOBLD_TypeDefinitionIndex = 71468;

class PCIGAGGOBLD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DKCCDPMINAJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PCIGAGGOBLD_TypeDefinitionIndex)->GetStaticField(0x49310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCIGAGGOBLD__CCTOR_OFFSET))();
	}
};
