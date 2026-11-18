#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCFCBIOINC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"

class KDAAFPENHNM;
namespace MoleMole::Battle { class Entity; }

#define JPGODIKMAJD_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x152B6730)
#define JPGODIKMAJD_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x152B6A00)
#define JPGODIKMAJD_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x152B6740)
#define JPGODIKMAJD__CTOR_OFFSET UNITYSDK_OFFSET(0x152B6DA0)

inline static constexpr unsigned int JPGODIKMAJD_TypeDefinitionIndex = 64067;

class JPGODIKMAJD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGODIKMAJD__CTOR_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGODIKMAJD_BKNKCFDBLGH_OFFSET))(this);
	}

	::DMCFCBIOINC LJAPJFDPIKF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + JPGODIKMAJD_LJAPJFDPIKF_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}

	::DMCFCBIOINC HFBPONNNLBA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + JPGODIKMAJD_HFBPONNNLBA_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}
};
