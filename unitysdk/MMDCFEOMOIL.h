#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKPGMDLBJNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MMDCFEOMOIL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1910E560)
#define MMDCFEOMOIL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1910E790)
#define MMDCFEOMOIL_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1910E650)
#define MMDCFEOMOIL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1910E410)
#define MMDCFEOMOIL_NIFLLAFHCOH_OFFSET UNITYSDK_OFFSET(0x1910E2D0)
#define MMDCFEOMOIL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1910E420)
#define MMDCFEOMOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1910E2C0)

inline static constexpr unsigned int MMDCFEOMOIL_TypeDefinitionIndex = 15379;

class MMDCFEOMOIL : public ::System::Object
{
public:
	::AKPGMDLBJNM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 LFOAPKMHGEJ; // 0x28
	::System::Int32 POKJNGILNLB; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::AKPGMDLBJNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKPGMDLBJNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MMDCFEOMOIL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NIFLLAFHCOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_NIFLLAFHCOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMDCFEOMOIL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
