#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBNLAFDKEOH.h"

namespace MoleMole { class InLevelBuddyDataItem; }

#define PFMKAPNCFHG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18465F50)
#define PFMKAPNCFHG_NOLNLGKADNH_OFFSET UNITYSDK_OFFSET(0x18466190)
#define PFMKAPNCFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x18465F40)

inline static constexpr unsigned int PFMKAPNCFHG_TypeDefinitionIndex = 65979;

class PFMKAPNCFHG : public ::GBNLAFDKEOH
{
public:
	::MoleMole::InLevelBuddyDataItem* HDOAGIJIBDN; // 0x28

	::System::Void _ctor(::MoleMole::InLevelBuddyDataItem* PMIDNALMHOP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + PFMKAPNCFHG__CTOR_OFFSET))(this, PMIDNALMHOP);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMKAPNCFHG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void NOLNLGKADNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMKAPNCFHG_NOLNLGKADNH_OFFSET))(this);
	}
};
