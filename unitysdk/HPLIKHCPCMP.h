#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPLIKHCPCMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14710CE0)

inline static constexpr unsigned int HPLIKHCPCMP_TypeDefinitionIndex = 49378;

class HPLIKHCPCMP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HAJONNCCEIO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HPLIKHCPCMP_TypeDefinitionIndex)->GetStaticField(0x4E580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLIKHCPCMP__CCTOR_OFFSET))();
	}
};
