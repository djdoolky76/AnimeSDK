#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class HEGAEGBJJBF;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }

#define EKBGKGDDHAM_LCACBILLAOB_DJMNMDONAFJ_OFFSET UNITYSDK_OFFSET(0x11CAE5D0)
#define EKBGKGDDHAM_LCACBILLAOB_DOTICK_OFFSET UNITYSDK_OFFSET(0x11CAE2C0)
#define EKBGKGDDHAM_LCACBILLAOB_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x11CAE5F0)
#define EKBGKGDDHAM_LCACBILLAOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11CAE550)
#define EKBGKGDDHAM_LCACBILLAOB_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x11CAE5E0)
#define EKBGKGDDHAM_LCACBILLAOB__CTOR_OFFSET UNITYSDK_OFFSET(0x11CADE30)

inline static constexpr unsigned int EKBGKGDDHAM_LCACBILLAOB_TypeDefinitionIndex = 88051;

class EKBGKGDDHAM_LCACBILLAOB
{
public:
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x28
	::System::Action* PABLEDCGDGM; // 0x30
	::HEGAEGBJJBF* LFOFGACBPLC; // 0x38
	::ACNLKLCDALA* PPDNIHPGCOJ; // 0x40
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x48
	::UnityEngine::Vector3 JMKFDAGFDFE; // 0x50
	::System::Int32 ABHBKFJKINO; // 0x5C
	::System::Boolean _KNHFHHEIPHJ_k__BackingField; // 0x60
	::System::Boolean HKFGDEMDHEF; // 0x61

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 JMKFDAGFDFE, ::System::Boolean HKFGDEMDHEF, ::System::Action* PABLEDCGDGM, ::System::String* FDGAGCDIMJG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB__CTOR_OFFSET))(this, KECKGDFIALJ, JMKFDAGFDFE, HKFGDEMDHEF, PABLEDCGDGM, FDGAGCDIMJG);
	}

	::System::Void DoTick(::System::Double MMNNLOMMNGL, ::System::Single PMNLNNGEIFM, ::Foundation::ETickingGroup CJEOGMMNGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_DOTICK_OFFSET))(this, MMNNLOMMNGL, PMNLNNGEIFM, CJEOGMMNGOL);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void DJMNMDONAFJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_DJMNMDONAFJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_PNNJKJEOHAL_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM_LCACBILLAOB_PGHAJOMNDDJ_OFFSET))(this);
	}
};
