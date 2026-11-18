#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGGICLAJOAK__CCTOR_OFFSET UNITYSDK_OFFSET(0x184F3750)

inline static constexpr unsigned int LGGICLAJOAK_TypeDefinitionIndex = 68979;

class LGGICLAJOAK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FNCOFPNLOGN()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LGGICLAJOAK_TypeDefinitionIndex)->GetStaticField(0x4BEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGICLAJOAK__CCTOR_OFFSET))();
	}
};
