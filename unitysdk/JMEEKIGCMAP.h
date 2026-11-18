#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNIJCAMKCAH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JMEEKIGCMAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19361370)
#define JMEEKIGCMAP_DFDLCICBOIO_OFFSET UNITYSDK_OFFSET(0x19361850)
#define JMEEKIGCMAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19361C10)
#define JMEEKIGCMAP_FPECLANNDOM_OFFSET UNITYSDK_OFFSET(0x19361460)
#define JMEEKIGCMAP_GIGKHHGIIGN_OFFSET UNITYSDK_OFFSET(0x19361710)
#define JMEEKIGCMAP_IEEPBDKFPON_OFFSET UNITYSDK_OFFSET(0x19361C20)
#define JMEEKIGCMAP_KGHBKLEDEOI_OFFSET UNITYSDK_OFFSET(0x193615C0)
#define JMEEKIGCMAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19361700)
#define JMEEKIGCMAP_MNIDDJABNPB_OFFSET UNITYSDK_OFFSET(0x19361AD0)
#define JMEEKIGCMAP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19361990)
#define JMEEKIGCMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19361360)

inline static constexpr unsigned int JMEEKIGCMAP_TypeDefinitionIndex = 17019;

class JMEEKIGCMAP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LNIJCAMKCAH HBDPAIKANDB; // 0x18
	::System::Int32 FBICAAFCMPD; // 0x28
	::System::Boolean EFADJOEGOIH; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte GCHCDJCFCEG; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 JFEEEIGHKCF; // 0x30
	::System::Int32 JDNEIKGBGIH; // 0x34
	::System::Int32 BNKPBLBFPBB; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 NMHNAHBJGOB; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45

	::System::Void _ctor(::LNIJCAMKCAH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNIJCAMKCAH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JMEEKIGCMAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean FPECLANNDOM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_FPECLANNDOM_OFFSET))(this);
	}

	::System::Int32 KGHBKLEDEOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_KGHBKLEDEOI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GIGKHHGIIGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_GIGKHHGIIGN_OFFSET))(this);
	}

	::System::Int32 DFDLCICBOIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_DFDLCICBOIO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 MNIDDJABNPB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_MNIDDJABNPB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IEEPBDKFPON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEEKIGCMAP_IEEPBDKFPON_OFFSET))(this);
	}
};
