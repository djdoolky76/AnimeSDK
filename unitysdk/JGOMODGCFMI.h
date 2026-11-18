#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGOMODGCFMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18738600)

inline static constexpr unsigned int JGOMODGCFMI_TypeDefinitionIndex = 54227;

class JGOMODGCFMI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AKEHOEADNCG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JGOMODGCFMI_TypeDefinitionIndex)->GetStaticField(0x40F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGOMODGCFMI__CCTOR_OFFSET))();
	}
};
