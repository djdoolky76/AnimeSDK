#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNCAAHLPPGO__CCTOR_OFFSET UNITYSDK_OFFSET(0xE59E6B0)

inline static constexpr unsigned int NNCAAHLPPGO_TypeDefinitionIndex = 54629;

class NNCAAHLPPGO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EEANABFKHEJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NNCAAHLPPGO_TypeDefinitionIndex)->GetStaticField(0x45560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCAAHLPPGO__CCTOR_OFFSET))();
	}
};
