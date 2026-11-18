#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCKKGPBNJII.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MBPMLFPILCB_CBOKIBDHGIB_OFFSET UNITYSDK_OFFSET(0x19104740)
#define MBPMLFPILCB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19104890)
#define MBPMLFPILCB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19104880)
#define MBPMLFPILCB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x191045F0)
#define MBPMLFPILCB_NCPMMEKADBH_OFFSET UNITYSDK_OFFSET(0x19104600)
#define MBPMLFPILCB__CTOR_OFFSET UNITYSDK_OFFSET(0x191045E0)

inline static constexpr unsigned int MBPMLFPILCB_TypeDefinitionIndex = 13537;

class MBPMLFPILCB : public ::System::Object
{
public:
	::JCKKGPBNJII HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 ILNNCPPFBFB; // 0x2C
	::System::Int32 DAMMLMKDNNJ; // 0x30

	::System::Void _ctor(::JCKKGPBNJII LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCKKGPBNJII, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MBPMLFPILCB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMLFPILCB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 NCPMMEKADBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMLFPILCB_NCPMMEKADBH_OFFSET))(this);
	}

	::System::Int32 CBOKIBDHGIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMLFPILCB_CBOKIBDHGIB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPMLFPILCB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMLFPILCB_COFGIJJOFLP_OFFSET))(this);
	}
};
