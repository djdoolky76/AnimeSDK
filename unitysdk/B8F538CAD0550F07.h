#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define B8F538CAD0550F07_EFC7B7329FCA3E6D_OFFSET UNITYSDK_OFFSET(0x402F000)
#define B8F538CAD0550F07__CCTOR_OFFSET UNITYSDK_OFFSET(0x402F030)

inline static constexpr unsigned int B8F538CAD0550F07_TypeDefinitionIndex = 20332;

class B8F538CAD0550F07 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_FF073E44B3EFE3A3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B8F538CAD0550F07_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Single* StaticGet_E9D88A4DF9AE9203()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(B8F538CAD0550F07_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B8F538CAD0550F07__CCTOR_OFFSET))();
	}

	static ::System::Single EFC7B7329FCA3E6D(::UnityEngine::E46B881AA2636190& FD6BEC6563AC7110)
	{
		return ((::System::Single(*)(::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + B8F538CAD0550F07_EFC7B7329FCA3E6D_OFFSET))(FD6BEC6563AC7110);
	}
};
