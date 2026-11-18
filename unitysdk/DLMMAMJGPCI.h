#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKLMJGLFFED.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define DLMMAMJGPCI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7438A0)
#define DLMMAMJGPCI_EHPNJIOLANF_OFFSET UNITYSDK_OFFSET(0x743870)
#define DLMMAMJGPCI_JBDFAGOOMBO_OFFSET UNITYSDK_OFFSET(0x743880)
#define DLMMAMJGPCI_LHCGEIHFKOD_OFFSET UNITYSDK_OFFSET(0x37AAB0)
#define DLMMAMJGPCI_LKKLNCNEBNC_OFFSET UNITYSDK_OFFSET(0x37AEF0)
#define DLMMAMJGPCI_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x149BC100)
#define DLMMAMJGPCI_MFKBAMJOLKC_OFFSET UNITYSDK_OFFSET(0x149BC320)
#define DLMMAMJGPCI_NPDNDEDIGLJ_OFFSET UNITYSDK_OFFSET(0x743750)
#define DLMMAMJGPCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x743740)
#define DLMMAMJGPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x7436C0)

inline static constexpr unsigned int DLMMAMJGPCI_TypeDefinitionIndex = 85680;

struct alignas(4) DLMMAMJGPCI
{
	::EKLMJGLFFED _CDOELEDDKPJ_k__BackingField; // 0x10
	::MoleMole::UICameraAtom _FDABIHEHMME_k__BackingField; // 0x48

	::System::Void _ctor(::EKLMJGLFFED CHNGLKPIJPD, ::UnityEngine::Vector3 FJFKMKFOLPN)
	{
		return ((::System::Void(*)(::PVOID, ::EKLMJGLFFED, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLMMAMJGPCI__CTOR_OFFSET))(this, CHNGLKPIJPD, FJFKMKFOLPN);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_TOSTRING_OFFSET))(this);
	}

	::EKLMJGLFFED LKKLNCNEBNC()
	{
		return ((::EKLMJGLFFED(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_LKKLNCNEBNC_OFFSET))(this);
	}

	::EKLMJGLFFED NPDNDEDIGLJ()
	{
		return ((::EKLMJGLFFED(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_NPDNDEDIGLJ_OFFSET))(this);
	}

	::System::Void EHPNJIOLANF(::MoleMole::UICameraAtom EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_EHPNJIOLANF_OFFSET))(this, EGEGIMGMJHN);
	}

	/*
	static ::DLMMAMJGPCI LOGMNFFOOCB()
	{
		return ((::DLMMAMJGPCI(*)())((::PBYTE)hIl2Cpp + DLMMAMJGPCI_LOGMNFFOOCB_OFFSET))();
	}
	*/

	::System::Void LHCGEIHFKOD(::EKLMJGLFFED EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EKLMJGLFFED))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_LHCGEIHFKOD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UICameraAtom JBDFAGOOMBO()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_JBDFAGOOMBO_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::DLMMAMJGPCI MFKBAMJOLKC(::DLMMAMJGPCI GEGOALONGBI, ::UnityEngine::Vector3 FLFBFLIMNDK)
	{
		return ((::DLMMAMJGPCI(*)(::DLMMAMJGPCI, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLMMAMJGPCI_MFKBAMJOLKC_OFFSET))(GEGOALONGBI, FLFBFLIMNDK);
	}
	*/
};
