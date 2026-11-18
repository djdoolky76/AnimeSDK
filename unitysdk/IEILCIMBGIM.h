#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEILCIMBGIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A96090)

inline static constexpr unsigned int IEILCIMBGIM_TypeDefinitionIndex = 43841;

class IEILCIMBGIM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IIPDPPONHFA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IEILCIMBGIM_TypeDefinitionIndex)->GetStaticField(0x4F640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEILCIMBGIM__CCTOR_OFFSET))();
	}
};
