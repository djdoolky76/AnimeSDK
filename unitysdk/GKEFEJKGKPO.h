#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKEFEJKGKPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DDDE00)

inline static constexpr unsigned int GKEFEJKGKPO_TypeDefinitionIndex = 61046;

class GKEFEJKGKPO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MCOCANIKDDH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GKEFEJKGKPO_TypeDefinitionIndex)->GetStaticField(0x51EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKEFEJKGKPO__CCTOR_OFFSET))();
	}
};
