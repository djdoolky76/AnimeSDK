#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKLDABNCGMI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EEAIHBCEFNA_AGCNFENBPCH_OFFSET UNITYSDK_OFFSET(0x1951B140)
#define EEAIHBCEFNA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1951B050)
#define EEAIHBCEFNA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1951AEF0)
#define EEAIHBCEFNA_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x1951AF10)
#define EEAIHBCEFNA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1951AF00)
#define EEAIHBCEFNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1951AEE0)

inline static constexpr unsigned int EEAIHBCEFNA_TypeDefinitionIndex = 16785;

class EEAIHBCEFNA : public ::System::Object
{
public:
	::System::String* EGMJMPCOBNI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::CKLDABNCGMI HBDPAIKANDB; // 0x20
	::System::Int32 GMJFIKLHANF; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::CKLDABNCGMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CKLDABNCGMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EEAIHBCEFNA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEAIHBCEFNA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAIHBCEFNA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JLGPJGAOOPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAIHBCEFNA_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAIHBCEFNA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AGCNFENBPCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAIHBCEFNA_AGCNFENBPCH_OFFSET))(this);
	}
};
