#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AA6ED32DEFC8E614_B5043C27FE915190_OFFSET UNITYSDK_OFFSET(0x3D08E10)
#define AA6ED32DEFC8E614__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D08CF0)

inline static constexpr unsigned int AA6ED32DEFC8E614_TypeDefinitionIndex = 10810;

class AA6ED32DEFC8E614 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_F2E4ADA59144BA50()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AA6ED32DEFC8E614_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet_A8BAD8E5D9447C7D()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AA6ED32DEFC8E614_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Boolean* StaticGet_E433BC575EFC98DB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AA6ED32DEFC8E614_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Int32 B5043C27FE915190()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AA6ED32DEFC8E614_B5043C27FE915190_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA6ED32DEFC8E614__CCTOR_OFFSET))();
	}
};
