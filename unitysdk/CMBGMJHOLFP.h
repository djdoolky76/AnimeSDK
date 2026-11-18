#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/System/Object.h"

#define CMBGMJHOLFP_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x1A1BC2B0)
#define CMBGMJHOLFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC270)

inline static constexpr unsigned int CMBGMJHOLFP_TypeDefinitionIndex = 86023;

class CMBGMJHOLFP : public ::System::Object
{
public:
	static ::NHKLBKEABJB* StaticGet_DDGNFJDLOKA()
	{
		return (::NHKLBKEABJB*)Il2CppClass::FromTypeDefinitionIndex(CMBGMJHOLFP_TypeDefinitionIndex)->GetStaticField(0xE0C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBGMJHOLFP__CCTOR_OFFSET))();
	}

	static ::NHKLBKEABJB OIOCDLMKFHN()
	{
		return ((::NHKLBKEABJB(*)())((::PBYTE)hIl2Cpp + CMBGMJHOLFP_OIOCDLMKFHN_OFFSET))();
	}
};
