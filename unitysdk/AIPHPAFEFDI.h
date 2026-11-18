#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

class KFNLPKJAINK_HNKFMGLDPCI;
namespace System { class String; }

#define AIPHPAFEFDI_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0x16481B60)
#define AIPHPAFEFDI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x16481A20)
#define AIPHPAFEFDI_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0x16481A90)
#define AIPHPAFEFDI_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x16481A30)
#define AIPHPAFEFDI_NLIPLBAFEKH_OFFSET UNITYSDK_OFFSET(0x16481B70)
#define AIPHPAFEFDI__CTOR_OFFSET UNITYSDK_OFFSET(0x16481A40)

inline static constexpr unsigned int AIPHPAFEFDI_TypeDefinitionIndex = 52701;

class AIPHPAFEFDI : public ::JMLLJAOFDGD
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x30
	::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH; // 0x38
	::System::String* JGMBJIOOMDJ; // 0x40

	::System::Void _ctor(::KFNLPKJAINK_HNKFMGLDPCI* EJGDHCIBCJH, ::System::String* JGMBJIOOMDJ)
	{
		return ((::System::Void(*)(::PVOID, ::KFNLPKJAINK_HNKFMGLDPCI*, ::System::String*))((::PBYTE)hIl2Cpp + AIPHPAFEFDI__CTOR_OFFSET))(this, EJGDHCIBCJH, JGMBJIOOMDJ);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHPAFEFDI_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AIPHPAFEFDI_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHPAFEFDI_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPHPAFEFDI_BIKHPDLBMFA_OFFSET))(this);
	}

	::System::Void NLIPLBAFEKH(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AIPHPAFEFDI_NLIPLBAFEKH_OFFSET))(this, DKPGLAFDLBC);
	}
};
