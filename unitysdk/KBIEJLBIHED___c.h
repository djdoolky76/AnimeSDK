#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"

#define KBIEJLBIHED___C_LMMMAAOKDAP_OFFSET UNITYSDK_OFFSET(0x12977700)
#define KBIEJLBIHED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129776B0)
#define KBIEJLBIHED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129776F0)

inline static constexpr unsigned int KBIEJLBIHED___c_TypeDefinitionIndex = 72546;

class KBIEJLBIHED___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBIEJLBIHED___c_TypeDefinitionIndex)->GetStaticField(0x3E4A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBIEJLBIHED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIEJLBIHED___C__CTOR_OFFSET))(this);
	}

	::JOHNONOOOCH LMMMAAOKDAP(::CKMMPOGHDFI& HODAIDNDKHD)
	{
		return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + KBIEJLBIHED___C_LMMMAAOKDAP_OFFSET))(this, HODAIDNDKHD);
	}
};
