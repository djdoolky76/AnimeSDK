#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCFGICDHPI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ELMLHNCPJDF_AKECDNOEOAD_OFFSET UNITYSDK_OFFSET(0x1ADD8060)
#define ELMLHNCPJDF_AONKNIENDNP_OFFSET UNITYSDK_OFFSET(0x1ADD85D0)
#define ELMLHNCPJDF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADD84E0)
#define ELMLHNCPJDF_EFFJEPHEHJI_OFFSET UNITYSDK_OFFSET(0x1ADD7F50)
#define ELMLHNCPJDF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADD7F40)
#define ELMLHNCPJDF_GELHLLCFOHB_OFFSET UNITYSDK_OFFSET(0x1ADD8290)
#define ELMLHNCPJDF_HFFLNDKPPDM_OFFSET UNITYSDK_OFFSET(0x1ADD83A0)
#define ELMLHNCPJDF_KLLEMKAPKHK_OFFSET UNITYSDK_OFFSET(0x1ADD8170)
#define ELMLHNCPJDF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADD8280)
#define ELMLHNCPJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD7F30)

inline static constexpr unsigned int ELMLHNCPJDF_TypeDefinitionIndex = 11017;

class ELMLHNCPJDF : public ::System::Object
{
public:
	::System::String* LHJFLGLKNHB; // 0x10
	::System::String* HMOGFJAJLAJ; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::EOCFGICDHPI HBDPAIKANDB; // 0x28
	::System::String* FMJDDDFGOLI; // 0x38
	::System::String* HDDDFOCIKKJ; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 FBMHALFCKPI; // 0x4C
	::System::Int32 OHCGDMKBAGI; // 0x50

	::System::Void _ctor(::EOCFGICDHPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EOCFGICDHPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELMLHNCPJDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EFFJEPHEHJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_EFFJEPHEHJI_OFFSET))(this);
	}

	::System::String* AKECDNOEOAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_AKECDNOEOAD_OFFSET))(this);
	}

	::System::String* KLLEMKAPKHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_KLLEMKAPKHK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GELHLLCFOHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_GELHLLCFOHB_OFFSET))(this);
	}

	::System::Int32 HFFLNDKPPDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_HFFLNDKPPDM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AONKNIENDNP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLHNCPJDF_AONKNIENDNP_OFFSET))(this);
	}
};
