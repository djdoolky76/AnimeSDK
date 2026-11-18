#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKBJGBLIKBM.h"

namespace System { class EventArgs; }

#define EPHNELDIOIH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1FF656F0)
#define EPHNELDIOIH_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1FF65590)
#define EPHNELDIOIH_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1FF65660)
#define EPHNELDIOIH_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1FF654D0)
#define EPHNELDIOIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF65650)

inline static constexpr unsigned int EPHNELDIOIH_TypeDefinitionIndex = 29063;

class EPHNELDIOIH : public ::FKBJGBLIKBM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNELDIOIH__CTOR_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EPHNELDIOIH_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNELDIOIH_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EPHNELDIOIH_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHNELDIOIH_ANEOCOIFDDJ_OFFSET))(this);
	}
};
