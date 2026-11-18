#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFEJINILJFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BLKAAJJGLEO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A535240)
#define BLKAAJJGLEO_EPOKNBKPGCI_OFFSET UNITYSDK_OFFSET(0x1A535130)
#define BLKAAJJGLEO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A535590)
#define BLKAAJJGLEO_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1A5355A0)
#define BLKAAJJGLEO_ILFGFACNGDB_OFFSET UNITYSDK_OFFSET(0x1A535450)
#define BLKAAJJGLEO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A535330)
#define BLKAAJJGLEO_MENBNDGCGCF_OFFSET UNITYSDK_OFFSET(0x1A5356E0)
#define BLKAAJJGLEO_OMCMFGBLKMM_OFFSET UNITYSDK_OFFSET(0x1A535340)
#define BLKAAJJGLEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A535120)

inline static constexpr unsigned int BLKAAJJGLEO_TypeDefinitionIndex = 15795;

class BLKAAJJGLEO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MFEJINILJFP HBDPAIKANDB; // 0x18
	::System::String* OFEHODNGLAH; // 0x28
	::System::String* ENOAGCJEFBL; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 KBFDEAADJFF; // 0x3C
	::System::Int32 POKJNGILNLB; // 0x40
	::System::Int32 LAJPHOFBJGL; // 0x44

	::System::Void _ctor(::MFEJINILJFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MFEJINILJFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BLKAAJJGLEO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* EPOKNBKPGCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_EPOKNBKPGCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OMCMFGBLKMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_OMCMFGBLKMM_OFFSET))(this);
	}

	::System::Int32 ILFGFACNGDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_ILFGFACNGDB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 MENBNDGCGCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKAAJJGLEO_MENBNDGCGCF_OFFSET))(this);
	}
};
