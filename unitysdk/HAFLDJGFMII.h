#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAFLDJGFMII__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DEB2E0)

inline static constexpr unsigned int HAFLDJGFMII_TypeDefinitionIndex = 77778;

class HAFLDJGFMII : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NAFOCLEBFHI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HAFLDJGFMII_TypeDefinitionIndex)->GetStaticField(0x4BA70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFLDJGFMII__CCTOR_OFFSET))();
	}
};
