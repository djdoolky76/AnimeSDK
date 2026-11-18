#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGJBOGHMJNC__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDE02C0)

inline static constexpr unsigned int EGJBOGHMJNC_TypeDefinitionIndex = 90604;

class EGJBOGHMJNC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BKCFPIBPMEJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EGJBOGHMJNC_TypeDefinitionIndex)->GetStaticField(0x47DF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJBOGHMJNC__CCTOR_OFFSET))();
	}
};
