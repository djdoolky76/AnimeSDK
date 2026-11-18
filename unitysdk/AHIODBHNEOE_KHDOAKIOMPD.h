#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define AHIODBHNEOE_KHDOAKIOMPD_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x154F9900)
#define AHIODBHNEOE_KHDOAKIOMPD_JIMDKCEFDNB_OFFSET UNITYSDK_OFFSET(0x154F9840)
#define AHIODBHNEOE_KHDOAKIOMPD_LKPEAJJCJIM_OFFSET UNITYSDK_OFFSET(0x154F98A0)
#define AHIODBHNEOE_KHDOAKIOMPD_OBDGDBDMAEN_OFFSET UNITYSDK_OFFSET(0x154F9960)
#define AHIODBHNEOE_KHDOAKIOMPD__CTOR_OFFSET UNITYSDK_OFFSET(0x154F9830)

inline static constexpr unsigned int AHIODBHNEOE_KHDOAKIOMPD_TypeDefinitionIndex = 85642;

class AHIODBHNEOE_KHDOAKIOMPD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE_KHDOAKIOMPD__CTOR_OFFSET))(this);
	}

	::System::Void JIMDKCEFDNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE_KHDOAKIOMPD_JIMDKCEFDNB_OFFSET))(this);
	}

	::System::Void LKPEAJJCJIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE_KHDOAKIOMPD_LKPEAJJCJIM_OFFSET))(this);
	}

	::System::Void BFOJKLIEDPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE_KHDOAKIOMPD_BFOJKLIEDPC_OFFSET))(this);
	}

	::System::Void OBDGDBDMAEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIODBHNEOE_KHDOAKIOMPD_OBDGDBDMAEN_OFFSET))(this);
	}
};
