#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHJNBKGIAKN__CCTOR_OFFSET UNITYSDK_OFFSET(0x115478B0)

inline static constexpr unsigned int CHJNBKGIAKN_TypeDefinitionIndex = 48835;

class CHJNBKGIAKN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LDJEKNEKNPK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CHJNBKGIAKN_TypeDefinitionIndex)->GetStaticField(0x43060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHJNBKGIAKN__CCTOR_OFFSET))();
	}
};
