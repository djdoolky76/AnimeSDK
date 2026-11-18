#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAKEJMBMGKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1437EAA0)

inline static constexpr unsigned int BAKEJMBMGKP_TypeDefinitionIndex = 78021;

class BAKEJMBMGKP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OPKMLMLPOEF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BAKEJMBMGKP_TypeDefinitionIndex)->GetStaticField(0x3D450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKEJMBMGKP__CCTOR_OFFSET))();
	}
};
