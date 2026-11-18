#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBEHLHOOCJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F57A60)

inline static constexpr unsigned int OBEHLHOOCJC_TypeDefinitionIndex = 51282;

class OBEHLHOOCJC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FCACLONMBMF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OBEHLHOOCJC_TypeDefinitionIndex)->GetStaticField(0x491A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBEHLHOOCJC__CCTOR_OFFSET))();
	}
};
