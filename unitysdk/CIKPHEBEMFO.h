#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIKPHEBEMFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CA4C0)

inline static constexpr unsigned int CIKPHEBEMFO_TypeDefinitionIndex = 76274;

class CIKPHEBEMFO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LGLLNJJOAAI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CIKPHEBEMFO_TypeDefinitionIndex)->GetStaticField(0x40370);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIKPHEBEMFO__CCTOR_OFFSET))();
	}
};
