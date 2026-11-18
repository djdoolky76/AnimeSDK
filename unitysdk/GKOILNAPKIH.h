#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKOILNAPKIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CF8880)

inline static constexpr unsigned int GKOILNAPKIH_TypeDefinitionIndex = 88666;

class GKOILNAPKIH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IEINAGPGGOH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GKOILNAPKIH_TypeDefinitionIndex)->GetStaticField(0x49C50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKOILNAPKIH__CCTOR_OFFSET))();
	}
};
