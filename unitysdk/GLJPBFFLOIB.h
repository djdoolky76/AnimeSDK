#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHJKMPBJDBN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GLJPBFFLOIB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BACE780)
#define GLJPBFFLOIB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BACE760)
#define GLJPBFFLOIB_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1BACE3A0)
#define GLJPBFFLOIB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BACE770)
#define GLJPBFFLOIB_LNKHBMIJGHE_OFFSET UNITYSDK_OFFSET(0x1BACE620)
#define GLJPBFFLOIB_PLPMPDEPKMA_OFFSET UNITYSDK_OFFSET(0x1BACE4E0)
#define GLJPBFFLOIB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BACE870)
#define GLJPBFFLOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACE390)

inline static constexpr unsigned int GLJPBFFLOIB_TypeDefinitionIndex = 15144;

class GLJPBFFLOIB : public ::System::Object
{
public:
	::System::String* PGNCOOJEKJD; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::OHJKMPBJDBN HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 BKNNANJBFLF; // 0x34
	::System::Int32 MFAAMEMILEM; // 0x38
	::System::Int32 PDHKKEKEOPO; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::OHJKMPBJDBN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OHJKMPBJDBN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GLJPBFFLOIB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Int32 PLPMPDEPKMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_PLPMPDEPKMA_OFFSET))(this);
	}

	::System::Int32 LNKHBMIJGHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_LNKHBMIJGHE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJPBFFLOIB_PPIFNHNGCGO_OFFSET))(this);
	}
};
