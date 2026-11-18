#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KONGMKBOCKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x129ADCF0)

inline static constexpr unsigned int KONGMKBOCKO_TypeDefinitionIndex = 86689;

class KONGMKBOCKO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NCCFGMFNLOH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KONGMKBOCKO_TypeDefinitionIndex)->GetStaticField(0x414D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KONGMKBOCKO__CCTOR_OFFSET))();
	}
};
