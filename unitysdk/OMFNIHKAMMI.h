#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBHMCBPCACM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OMFNIHKAMMI_CHCJBFFDBNF_OFFSET UNITYSDK_OFFSET(0x173699D0)
#define OMFNIHKAMMI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x173697A0)
#define OMFNIHKAMMI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17369B10)
#define OMFNIHKAMMI_GFBALOFNCNN_OFFSET UNITYSDK_OFFSET(0x17369890)
#define OMFNIHKAMMI_JEBMBHFOLCL_OFFSET UNITYSDK_OFFSET(0x17369690)
#define OMFNIHKAMMI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17369C60)
#define OMFNIHKAMMI_OOGJNLDFOLO_OFFSET UNITYSDK_OFFSET(0x17369B20)
#define OMFNIHKAMMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17369680)

inline static constexpr unsigned int OMFNIHKAMMI_TypeDefinitionIndex = 10933;

class OMFNIHKAMMI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LBHMCBPCACM HBDPAIKANDB; // 0x18
	::System::String* HKOKPPIEKOL; // 0x28
	::System::Int32 FNPCPGNGNAC; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte GCHCDJCFCEG; // 0x36
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x37
	::System::Int32 EDGGHMCNHKN; // 0x38
	::System::Int32 HACHOBFGELL; // 0x3C

	::System::Void _ctor(::LBHMCBPCACM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LBHMCBPCACM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMFNIHKAMMI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JEBMBHFOLCL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_JEBMBHFOLCL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GFBALOFNCNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_GFBALOFNCNN_OFFSET))(this);
	}

	::System::Int32 CHCJBFFDBNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_CHCJBFFDBNF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OOGJNLDFOLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_OOGJNLDFOLO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNIHKAMMI_LJANCIBECFG_OFFSET))(this);
	}
};
