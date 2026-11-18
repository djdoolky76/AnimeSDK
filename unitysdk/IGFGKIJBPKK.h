#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGFGKIJBPKK__CCTOR_OFFSET UNITYSDK_OFFSET(0x10144A50)

inline static constexpr unsigned int IGFGKIJBPKK_TypeDefinitionIndex = 73008;

class IGFGKIJBPKK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FDOIGJCJMKP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IGFGKIJBPKK_TypeDefinitionIndex)->GetStaticField(0x3B300);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGFGKIJBPKK__CCTOR_OFFSET))();
	}
};
