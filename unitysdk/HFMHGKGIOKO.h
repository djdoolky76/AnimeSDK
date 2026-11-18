#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCFBBDPCJDH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HFMHGKGIOKO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17471600)
#define HFMHGKGIOKO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x174715F0)
#define HFMHGKGIOKO_JPKCBKBABKM_OFFSET UNITYSDK_OFFSET(0x174714B0)
#define HFMHGKGIOKO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17471970)
#define HFMHGKGIOKO_NMFHAHKIIGC_OFFSET UNITYSDK_OFFSET(0x174716F0)
#define HFMHGKGIOKO_OEGGAJHHMKN_OFFSET UNITYSDK_OFFSET(0x17471830)
#define HFMHGKGIOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x174714A0)

inline static constexpr unsigned int HFMHGKGIOKO_TypeDefinitionIndex = 13904;

class HFMHGKGIOKO : public ::System::Object
{
public:
	::GCFBBDPCJDH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KHKPIBEIEFC; // 0x28
	::System::Int32 OKMMKLBHCIA; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 GNFPAFNMGGK; // 0x34

	::System::Void _ctor(::GCFBBDPCJDH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GCFBBDPCJDH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFMHGKGIOKO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JPKCBKBABKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_JPKCBKBABKM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NMFHAHKIIGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_NMFHAHKIIGC_OFFSET))(this);
	}

	::System::Int32 OEGGAJHHMKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_OEGGAJHHMKN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMHGKGIOKO_LJANCIBECFG_OFFSET))(this);
	}
};
