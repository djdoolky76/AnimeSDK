#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHBLEOGMEOJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AICIKKHOODH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A56E580)
#define AICIKKHOODH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A56E560)
#define AICIKKHOODH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A56E570)
#define AICIKKHOODH_OIPJJPLGLEE_OFFSET UNITYSDK_OFFSET(0x1A56E670)
#define AICIKKHOODH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56E550)

inline static constexpr unsigned int AICIKKHOODH_TypeDefinitionIndex = 16902;

class AICIKKHOODH : public ::System::Object
{
public:
	::JHBLEOGMEOJ HBDPAIKANDB; // 0x10
	::System::String* BCGFNHNDFGJ; // 0x20
	::System::String* HAKPKCIJBGK; // 0x28
	::System::String* JHGDOFNFBFC; // 0x30
	::System::String* JBCIANFNODG; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Int32 LEMGCLIBCCA; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 DNOGPFMBKPH; // 0x50

	::System::Void _ctor(::JHBLEOGMEOJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHBLEOGMEOJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AICIKKHOODH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AICIKKHOODH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AICIKKHOODH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICIKKHOODH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OIPJJPLGLEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AICIKKHOODH_OIPJJPLGLEE_OFFSET))(this);
	}
};
