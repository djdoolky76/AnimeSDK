#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GCBLBOPFBED__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB81730)

inline static constexpr unsigned int GCBLBOPFBED_TypeDefinitionIndex = 52598;

class GCBLBOPFBED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NOFFFBCLPJF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GCBLBOPFBED_TypeDefinitionIndex)->GetStaticField(0x47F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCBLBOPFBED__CCTOR_OFFSET))();
	}
};
