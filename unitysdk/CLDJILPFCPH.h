#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADPGMLIMDDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CLDJILPFCPH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BF6E40)
#define CLDJILPFCPH_DGKJIONLIFH_OFFSET UNITYSDK_OFFSET(0x19BF6F30)
#define CLDJILPFCPH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BF6E20)
#define CLDJILPFCPH_GBMIOBCNIGO_OFFSET UNITYSDK_OFFSET(0x19BF72C0)
#define CLDJILPFCPH_GIHMOMMEJHC_OFFSET UNITYSDK_OFFSET(0x19BF6D10)
#define CLDJILPFCPH_JIGHNBBJKFE_OFFSET UNITYSDK_OFFSET(0x19BF7180)
#define CLDJILPFCPH_LGMMAGPFDMC_OFFSET UNITYSDK_OFFSET(0x19BF7040)
#define CLDJILPFCPH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BF6E30)
#define CLDJILPFCPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6D00)

inline static constexpr unsigned int CLDJILPFCPH_TypeDefinitionIndex = 14432;

class CLDJILPFCPH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* MNCEMCEDJGD; // 0x18
	::System::String* DJFAEJCKNNP; // 0x20
	::ADPGMLIMDDP HBDPAIKANDB; // 0x28
	::System::String* BLPIKDAGLOH; // 0x38
	::System::Int32 FGLBJIBEAOF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 JMCDNAHGIGC; // 0x48
	::System::Int32 KNECPLDGBNP; // 0x4C

	::System::Void _ctor(::ADPGMLIMDDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ADPGMLIMDDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLDJILPFCPH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GIHMOMMEJHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_GIHMOMMEJHC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLDJILPFCPH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DGKJIONLIFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_DGKJIONLIFH_OFFSET))(this);
	}

	::System::Int32 LGMMAGPFDMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_LGMMAGPFDMC_OFFSET))(this);
	}

	::System::Int32 JIGHNBBJKFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_JIGHNBBJKFE_OFFSET))(this);
	}

	::System::String* GBMIOBCNIGO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDJILPFCPH_GBMIOBCNIGO_OFFSET))(this);
	}
};
