#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENOFGEBHHGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x135522E0)

inline static constexpr unsigned int ENOFGEBHHGK_TypeDefinitionIndex = 41535;

class ENOFGEBHHGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MFAEDDMNNCA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ENOFGEBHHGK_TypeDefinitionIndex)->GetStaticField(0x50790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOFGEBHHGK__CCTOR_OFFSET))();
	}
};
