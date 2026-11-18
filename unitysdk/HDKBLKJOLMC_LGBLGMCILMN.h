#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDDEPLBABF;
namespace System { class Action; }

#define HDKBLKJOLMC_LGBLGMCILMN_MNNAKMABLLK_OFFSET UNITYSDK_OFFSET(0x17AECB90)
#define HDKBLKJOLMC_LGBLGMCILMN_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x17AEC720)
#define HDKBLKJOLMC_LGBLGMCILMN__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEC710)

inline static constexpr unsigned int HDKBLKJOLMC_LGBLGMCILMN_TypeDefinitionIndex = 64692;

class HDKBLKJOLMC_LGBLGMCILMN : public ::System::Object
{
public:
	::BPDDEPLBABF* DMAFEDIBGIK; // 0x10
	::System::Action* HKEBHFKHBCC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBLKJOLMC_LGBLGMCILMN__CTOR_OFFSET))(this);
	}

	::System::Void NBCIIJNMMCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBLKJOLMC_LGBLGMCILMN_NBCIIJNMMCI_OFFSET))(this);
	}

	::System::Void MNNAKMABLLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKBLKJOLMC_LGBLGMCILMN_MNNAKMABLLK_OFFSET))(this);
	}
};
