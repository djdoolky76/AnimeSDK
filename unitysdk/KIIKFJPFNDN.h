#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCFCBIOINC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"

class KDAAFPENHNM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIIKFJPFNDN_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x15210C30)
#define KIIKFJPFNDN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15211010)
#define KIIKFJPFNDN_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x15210C40)
#define KIIKFJPFNDN__CTOR_OFFSET UNITYSDK_OFFSET(0x152117E0)

inline static constexpr unsigned int KIIKFJPFNDN_TypeDefinitionIndex = 84057;

class KIIKFJPFNDN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* AJAAKDOAILE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKFJPFNDN__CTOR_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKFJPFNDN_BKNKCFDBLGH_OFFSET))(this);
	}

	::DMCFCBIOINC LJAPJFDPIKF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF EJFGMAHJMHK, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + KIIKFJPFNDN_LJAPJFDPIKF_OFFSET))(this, KECKGDFIALJ, EJFGMAHJMHK, HHIJHDFHPOI);
	}

	::DMCFCBIOINC HFBPONNNLBA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::AJJMHOGKDNF EJFGMAHJMHK, ::KDAAFPENHNM* HHIJHDFHPOI)
	{
		return ((::DMCFCBIOINC(*)(::PVOID, ::MoleMole::Battle::Entity*, ::AJJMHOGKDNF, ::KDAAFPENHNM*))((::PBYTE)hIl2Cpp + KIIKFJPFNDN_HFBPONNNLBA_OFFSET))(this, KECKGDFIALJ, EJFGMAHJMHK, HHIJHDFHPOI);
	}
};
