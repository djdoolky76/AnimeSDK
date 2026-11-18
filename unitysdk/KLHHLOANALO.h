#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCNAHGDDPFN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KLHHLOANALO_BBPGDMKHFFF_OFFSET UNITYSDK_OFFSET(0x1BA7BA50)
#define KLHHLOANALO_CLFALFKBCDC_OFFSET UNITYSDK_OFFSET(0x1BA7B5C0)
#define KLHHLOANALO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA7B820)
#define KLHHLOANALO_FDBJAMPJGNO_OFFSET UNITYSDK_OFFSET(0x1BA7B910)
#define KLHHLOANALO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA7B700)
#define KLHHLOANALO_LBFBBNGNBFF_OFFSET UNITYSDK_OFFSET(0x1BA7B710)
#define KLHHLOANALO_LDONBFMFFPG_OFFSET UNITYSDK_OFFSET(0x1BA7BB90)
#define KLHHLOANALO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA7BCA0)
#define KLHHLOANALO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7B5B0)

inline static constexpr unsigned int KLHHLOANALO_TypeDefinitionIndex = 12095;

class KLHHLOANALO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IGGIBNIHNND; // 0x18
	::System::String* EOGIDIOKAHD; // 0x20
	::CCNAHGDDPFN HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 EGGAHOOLNPG; // 0x3C
	::System::Int32 CLBELIGODJD; // 0x40
	::System::Int32 PJICBDODDNJ; // 0x44

	::System::Void _ctor(::CCNAHGDDPFN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CCNAHGDDPFN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLHHLOANALO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CLFALFKBCDC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_CLFALFKBCDC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLHHLOANALO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LBFBBNGNBFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_LBFBBNGNBFF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FDBJAMPJGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_FDBJAMPJGNO_OFFSET))(this);
	}

	::System::Int32 BBPGDMKHFFF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_BBPGDMKHFFF_OFFSET))(this);
	}

	::System::String* LDONBFMFFPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_LDONBFMFFPG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHHLOANALO_LJANCIBECFG_OFFSET))(this);
	}
};
