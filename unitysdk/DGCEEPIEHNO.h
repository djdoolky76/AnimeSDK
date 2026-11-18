#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOCBJFEIDOM.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DGCEEPIEHNO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187989A0)
#define DGCEEPIEHNO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18798990)
#define DGCEEPIEHNO_FONAEMLMFHP_OFFSET UNITYSDK_OFFSET(0x18798AA0)
#define DGCEEPIEHNO_GFKFPPGNPKG_OFFSET UNITYSDK_OFFSET(0x18798CC0)
#define DGCEEPIEHNO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18798A90)
#define DGCEEPIEHNO_PHAOBOLIBCA_OFFSET UNITYSDK_OFFSET(0x18798770)
#define DGCEEPIEHNO__CTOR_OFFSET UNITYSDK_OFFSET(0x18798760)

inline static constexpr unsigned int DGCEEPIEHNO_TypeDefinitionIndex = 11745;

class DGCEEPIEHNO : public ::System::Object
{
public:
	::System::Nullable_1<::HNFADNMADCK> BPKAKHKBDAH; // 0x10
	::System::Byte _padding0[0x10];
	::System::Nullable_1<::HNFADNMADCK> JIMICBFFMNM; // 0x28
	::System::Byte _padding1[0x10];
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::BOCBJFEIDOM HBDPAIKANDB; // 0x48
	::System::Nullable_1<::HNFADNMADCK> KONDOLAHJGP; // 0x58
	::System::Byte _padding2[0x10];
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x70
	::System::Byte CNIAANMNOCF; // 0x71
	::System::Byte ACIOBDEBDNK; // 0x72

	::System::Void _ctor(::BOCBJFEIDOM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOCBJFEIDOM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DGCEEPIEHNO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::HNFADNMADCK PHAOBOLIBCA()
	{
		return ((::HNFADNMADCK(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_PHAOBOLIBCA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_LJANCIBECFG_OFFSET))(this);
	}

	::HNFADNMADCK FONAEMLMFHP()
	{
		return ((::HNFADNMADCK(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_FONAEMLMFHP_OFFSET))(this);
	}

	::HNFADNMADCK GFKFPPGNPKG()
	{
		return ((::HNFADNMADCK(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCEEPIEHNO_GFKFPPGNPKG_OFFSET))(this);
	}
};
