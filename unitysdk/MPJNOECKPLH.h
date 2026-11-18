#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGEAJENDKCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MPJNOECKPLH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E12FC0)
#define MPJNOECKPLH_FECFCHMJHML_OFFSET UNITYSDK_OFFSET(0x18E12E30)
#define MPJNOECKPLH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E13520)
#define MPJNOECKPLH_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x18E13800)
#define MPJNOECKPLH_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x18E136C0)
#define MPJNOECKPLH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E130B0)
#define MPJNOECKPLH_LLNNAHCIAOM_OFFSET UNITYSDK_OFFSET(0x18E13250)
#define MPJNOECKPLH_MEAKGMCFGAL_OFFSET UNITYSDK_OFFSET(0x18E13530)
#define MPJNOECKPLH_MNGNAMLGGJN_OFFSET UNITYSDK_OFFSET(0x18E130C0)
#define MPJNOECKPLH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18E133E0)
#define MPJNOECKPLH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E12E20)

inline static constexpr unsigned int MPJNOECKPLH_TypeDefinitionIndex = 13998;

class MPJNOECKPLH : public ::System::Object
{
public:
	::System::String* FPDCABEOFOC; // 0x10
	::System::String* EMDOKBMBFAB; // 0x18
	::System::String* AFAFGDJPGNF; // 0x20
	::KGEAJENDKCB HBDPAIKANDB; // 0x28
	::System::String* BOFBGDGCHCD; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Int32 ONPMJGJBNOA; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 OCFJMFHDEBP; // 0x54

	::System::Void _ctor(::KGEAJENDKCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGEAJENDKCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MPJNOECKPLH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FECFCHMJHML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_FECFCHMJHML_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MNGNAMLGGJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_MNGNAMLGGJN_OFFSET))(this);
	}

	::System::String* LLNNAHCIAOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_LLNNAHCIAOM_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPJNOECKPLH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MEAKGMCFGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_MEAKGMCFGAL_OFFSET))(this);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJNOECKPLH_HJEFCNNHHEO_OFFSET))(this);
	}
};
