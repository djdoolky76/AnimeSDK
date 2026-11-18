#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGEOFGELOBE;

#define FGEOFGELOBE___C_HMKHDCPIOGG_OFFSET UNITYSDK_OFFSET(0x1FB33D10)
#define FGEOFGELOBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB33CC0)
#define FGEOFGELOBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB33D00)

inline static constexpr unsigned int FGEOFGELOBE___c_TypeDefinitionIndex = 18114;

class FGEOFGELOBE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FGEOFGELOBE___c_TypeDefinitionIndex)->GetStaticField(0x8600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGEOFGELOBE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOFGELOBE___C__CTOR_OFFSET))(this);
	}

	::FGEOFGELOBE* HMKHDCPIOGG()
	{
		return ((::FGEOFGELOBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOFGELOBE___C_HMKHDCPIOGG_OFFSET))(this);
	}
};
