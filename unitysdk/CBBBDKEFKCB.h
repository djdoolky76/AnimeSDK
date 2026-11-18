#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEAPCJOEPNC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CBBBDKEFKCB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BF1150)
#define CBBBDKEFKCB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BF1380)
#define CBBBDKEFKCB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BF1390)
#define CBBBDKEFKCB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19BF1240)
#define CBBBDKEFKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF1140)

inline static constexpr unsigned int CBBBDKEFKCB_TypeDefinitionIndex = 9835;

class CBBBDKEFKCB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FEAPCJOEPNC HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C

	::System::Void _ctor(::FEAPCJOEPNC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEAPCJOEPNC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CBBBDKEFKCB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBBDKEFKCB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBBDKEFKCB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBBBDKEFKCB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBBDKEFKCB_LJANCIBECFG_OFFSET))(this);
	}
};
