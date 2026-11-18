#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JKAJDIOFMJN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A479D50)

inline static constexpr unsigned int JKAJDIOFMJN_TypeDefinitionIndex = 80298;

class JKAJDIOFMJN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BEIKDMKEPMC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JKAJDIOFMJN_TypeDefinitionIndex)->GetStaticField(0x44470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKAJDIOFMJN__CCTOR_OFFSET))();
	}
};
