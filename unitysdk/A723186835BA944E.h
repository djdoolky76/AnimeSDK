#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigIniModel; }

#define A723186835BA944E_BDE9183EC67E1B80_OFFSET UNITYSDK_OFFSET(0x38D8CB0)
#define A723186835BA944E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A723186835BA944E_TypeDefinitionIndex = 11766;

class A723186835BA944E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A723186835BA944E__CTOR_OFFSET))(this);
	}

	static ::MiHoYo::SDK::ConfigIniModel* BDE9183EC67E1B80()
	{
		return ((::MiHoYo::SDK::ConfigIniModel*(*)())((::PBYTE)hIl2Cpp + A723186835BA944E_BDE9183EC67E1B80_OFFSET))();
	}
};
