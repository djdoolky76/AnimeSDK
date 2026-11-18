#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

class KFNLPKJAINK_HNKFMGLDPCI;
namespace System { class String; }

#define GBECLDAAFBO_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x11C89460)
#define GBECLDAAFBO_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x11C892B0)
#define GBECLDAAFBO_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x11C89310)
#define GBECLDAAFBO_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0x11C89470)
#define GBECLDAAFBO_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x11C892C0)
#define GBECLDAAFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x11C892D0)

inline static constexpr unsigned int GBECLDAAFBO_TypeDefinitionIndex = 70075;

class GBECLDAAFBO : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH; // 0x38

	::System::Void _ctor(::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::KFNLPKJAINK_HNKFMGLDPCI*))((::PBYTE)hIl2Cpp + GBECLDAAFBO__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBECLDAAFBO_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBECLDAAFBO_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBECLDAAFBO_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBECLDAAFBO_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GBECLDAAFBO_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}
};
