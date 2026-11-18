#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KACPNOJMANN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B60490)

inline static constexpr unsigned int KACPNOJMANN_TypeDefinitionIndex = 65256;

class KACPNOJMANN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CENKFNILICE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KACPNOJMANN_TypeDefinitionIndex)->GetStaticField(0x32740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KACPNOJMANN__CCTOR_OFFSET))();
	}
};
