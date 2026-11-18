#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAKCLNFHPLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2C930)

inline static constexpr unsigned int KAKCLNFHPLC_TypeDefinitionIndex = 59842;

class KAKCLNFHPLC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OIALKKNNFDM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KAKCLNFHPLC_TypeDefinitionIndex)->GetStaticField(0x48250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAKCLNFHPLC__CCTOR_OFFSET))();
	}
};
