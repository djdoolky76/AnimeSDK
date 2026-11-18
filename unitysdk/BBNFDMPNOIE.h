#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBNFDMPNOIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15065DA0)

inline static constexpr unsigned int BBNFDMPNOIE_TypeDefinitionIndex = 90652;

class BBNFDMPNOIE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IFMCPACBDOM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BBNFDMPNOIE_TypeDefinitionIndex)->GetStaticField(0x50010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBNFDMPNOIE__CCTOR_OFFSET))();
	}
};
