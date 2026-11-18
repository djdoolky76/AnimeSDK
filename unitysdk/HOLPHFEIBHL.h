#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

class KFNLPKJAINK_HNKFMGLDPCI;
namespace System { class String; }

#define HOLPHFEIBHL_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x1470D150)
#define HOLPHFEIBHL_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1470CE10)
#define HOLPHFEIBHL_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x1470CE80)
#define HOLPHFEIBHL_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x1470CE20)
#define HOLPHFEIBHL_NLIPLBAFEKH_OFFSET UNITYSDK_OFFSET(0x1470D160)
#define HOLPHFEIBHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1470CE30)

inline static constexpr unsigned int HOLPHFEIBHL_TypeDefinitionIndex = 72451;

class HOLPHFEIBHL : public ::JMLLJAOFDGD
{
public:
	::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH; // 0x30
	::System::String* HEKMCLPIJFC; // 0x38
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x40

	::System::Void _ctor(::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH, ::System::String* HEKMCLPIJFC)
	{
		return ((::System::Void(*)(::PVOID, ::KFNLPKJAINK_HNKFMGLDPCI*, ::System::String*))((::PBYTE)hIl2Cpp + HOLPHFEIBHL__CTOR_OFFSET))(this, EJGDHCIBCJH, HEKMCLPIJFC);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLPHFEIBHL_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOLPHFEIBHL_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLPHFEIBHL_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLPHFEIBHL_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void NLIPLBAFEKH(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOLPHFEIBHL_NLIPLBAFEKH_OFFSET))(this, DKPGLAFDLBC);
	}
};
