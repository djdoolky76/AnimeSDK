#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP_IAMAKGEAMMG.h"
#include "unitysdk/System/Object.h"

class MPKBDIJDMAP;
namespace System { template <typename T> class Action_1; }

#define MPKBDIJDMAP_IAFGNJNNBOD_BCIPMJANCIK_OFFSET UNITYSDK_OFFSET(0x1C5A13F0)
#define MPKBDIJDMAP_IAFGNJNNBOD_BKHLJHCBGHI_OFFSET UNITYSDK_OFFSET(0x1C5A1480)
#define MPKBDIJDMAP_IAFGNJNNBOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A13E0)

inline static constexpr unsigned int MPKBDIJDMAP_IAFGNJNNBOD_TypeDefinitionIndex = 65442;

class MPKBDIJDMAP_IAFGNJNNBOD : public ::System::Object
{
public:
	::MPKBDIJDMAP_IAMAKGEAMMG OKLFLAFPAJM; // 0x10
	::MPKBDIJDMAP* KLHPEBKNIFB; // 0x20
	::System::Action_1<::System::Single>* CGAEEDNPJHP; // 0x28
	::System::Single MDPPNMIPDMP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_IAFGNJNNBOD__CTOR_OFFSET))(this);
	}

	::System::Void BCIPMJANCIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_IAFGNJNNBOD_BCIPMJANCIK_OFFSET))(this);
	}

	::System::Void BKHLJHCBGHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_IAFGNJNNBOD_BKHLJHCBGHI_OFFSET))(this);
	}
};
