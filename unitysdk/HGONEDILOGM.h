#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCFCBIOINC.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"

class KDAAFPENHNM;
namespace MoleMole::Battle { class Entity; }

#define HGONEDILOGM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x17AF7180)
#define HGONEDILOGM_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x17AF72C0)
#define HGONEDILOGM_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x17AF7190)
#define HGONEDILOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF7720)

inline static constexpr unsigned int HGONEDILOGM_TypeDefinitionIndex = 62298;

class HGONEDILOGM : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle CDMEOMIAAHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGONEDILOGM__CTOR_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGONEDILOGM_BKNKCFDBLGH_OFFSET))(this);
	}

	::DMCFCBIOINC LJAPJFDPIKF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + HGONEDILOGM_LJAPJFDPIKF_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}

	::DMCFCBIOINC HFBPONNNLBA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF ADHNMNEFFKB, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + HGONEDILOGM_HFBPONNNLBA_OFFSET))(this, KECKGDFIALJ, ADHNMNEFFKB, HHIJHDFHPOI);
	}
};
