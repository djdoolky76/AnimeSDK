#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKBJGBLIKBM.h"

namespace System { class EventArgs; }

#define MDPBOBADGPI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1EBEBC40)
#define MDPBOBADGPI_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1EBEBAE0)
#define MDPBOBADGPI_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1EBEBBB0)
#define MDPBOBADGPI_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1EBEBA20)
#define MDPBOBADGPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEBBA0)

inline static constexpr unsigned int MDPBOBADGPI_TypeDefinitionIndex = 29143;

class MDPBOBADGPI : public ::FKBJGBLIKBM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPBOBADGPI__CTOR_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MDPBOBADGPI_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPBOBADGPI_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MDPBOBADGPI_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPBOBADGPI_ANEOCOIFDDJ_OFFSET))(this);
	}
};
