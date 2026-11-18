#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKHINKAEEMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define LDIEDHJHMNL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA83CC0)
#define LDIEDHJHMNL_DGCJAPFOAND_OFFSET UNITYSDK_OFFSET(0x1BA83DB0)
#define LDIEDHJHMNL_DKBKJGHCDDB_OFFSET UNITYSDK_OFFSET(0x1BA83F10)
#define LDIEDHJHMNL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA83F00)
#define LDIEDHJHMNL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA83EF0)
#define LDIEDHJHMNL_PLDJINBELMF_OFFSET UNITYSDK_OFFSET(0x1BA83B80)
#define LDIEDHJHMNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA83B70)

inline static constexpr unsigned int LDIEDHJHMNL_TypeDefinitionIndex = 10070;

class LDIEDHJHMNL : public ::System::Object
{
public:
	::HKHINKAEEMD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 AGHNAABBDKJ; // 0x2C
	::System::Int32 FIEHBMDCCNP; // 0x30
	::System::Int32 FIHIMFLNKEN; // 0x34

	::System::Void _ctor(::HKHINKAEEMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKHINKAEEMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDIEDHJHMNL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PLDJINBELMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_PLDJINBELMF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DGCJAPFOAND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_DGCJAPFOAND_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DKBKJGHCDDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEDHJHMNL_DKBKJGHCDDB_OFFSET))(this);
	}
};
