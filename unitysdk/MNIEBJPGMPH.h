#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPNPEBLDLF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MNIEBJPGMPH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DB89C0)
#define MNIEBJPGMPH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DB8870)
#define MNIEBJPGMPH_LCHFFLAIJBF_OFFSET UNITYSDK_OFFSET(0x19DB8880)
#define MNIEBJPGMPH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DB8860)
#define MNIEBJPGMPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8850)

inline static constexpr unsigned int MNIEBJPGMPH_TypeDefinitionIndex = 15995;

class MNIEBJPGMPH : public ::System::Object
{
public:
	::FNPNPEBLDLF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KBFMFAJEMKH; // 0x2C

	::System::Void _ctor(::FNPNPEBLDLF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNPNPEBLDLF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNIEBJPGMPH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEBJPGMPH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIEBJPGMPH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LCHFFLAIJBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEBJPGMPH_LCHFFLAIJBF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEBJPGMPH_COFGIJJOFLP_OFFSET))(this);
	}
};
