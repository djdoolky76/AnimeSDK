#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLDBKGBNBGM__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7A9820)

inline static constexpr unsigned int BLDBKGBNBGM_TypeDefinitionIndex = 68533;

class BLDBKGBNBGM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KOIONANANHL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BLDBKGBNBGM_TypeDefinitionIndex)->GetStaticField(0x51C50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDBKGBNBGM__CCTOR_OFFSET))();
	}
};
