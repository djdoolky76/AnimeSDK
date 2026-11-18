#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCFCBIOINC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"

class KDAAFPENHNM;
namespace MoleMole::Battle { class Entity; }

#define NNGJICADCPA_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x115ACFD0)
#define NNGJICADCPA_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x115AD200)
#define NNGJICADCPA_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x115ACFE0)
#define NNGJICADCPA__CTOR_OFFSET UNITYSDK_OFFSET(0x115AD270)

inline static constexpr unsigned int NNGJICADCPA_TypeDefinitionIndex = 49008;

class NNGJICADCPA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGJICADCPA__CTOR_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGJICADCPA_BKNKCFDBLGH_OFFSET))(this);
	}

	::DMCFCBIOINC LJAPJFDPIKF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + NNGJICADCPA_LJAPJFDPIKF_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}

	::DMCFCBIOINC HFBPONNNLBA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + NNGJICADCPA_HFBPONNNLBA_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}
};
