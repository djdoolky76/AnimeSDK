#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMEBEFKCLDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DNIGOCKMOPL_AIACMKDIOHB_OFFSET UNITYSDK_OFFSET(0x1661DFF0)
#define DNIGOCKMOPL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1661E140)
#define DNIGOCKMOPL_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1661DC60)
#define DNIGOCKMOPL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1661DA00)
#define DNIGOCKMOPL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1661E130)
#define DNIGOCKMOPL_LPHONAJLEJL_OFFSET UNITYSDK_OFFSET(0x1661DB20)
#define DNIGOCKMOPL_OBMJDFGPEHE_OFFSET UNITYSDK_OFFSET(0x1661DEB0)
#define DNIGOCKMOPL_OEEKMIPCMMK_OFFSET UNITYSDK_OFFSET(0x1661DDA0)
#define DNIGOCKMOPL_PIOGMFCHDHK_OFFSET UNITYSDK_OFFSET(0x1661DA10)
#define DNIGOCKMOPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1661D9F0)

inline static constexpr unsigned int DNIGOCKMOPL_TypeDefinitionIndex = 13740;

class DNIGOCKMOPL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JJCCKDNCIJD; // 0x18
	::System::String* FEJKDJOGIIB; // 0x20
	::BMEBEFKCLDP HBDPAIKANDB; // 0x28
	::System::Int32 KFLIOHGEPDG; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 JMCDNAHGIGC; // 0x40
	::System::Int32 ANNKNPLMCNP; // 0x44
	::System::Int32 EFJPIKLCENJ; // 0x48

	::System::Void _ctor(::BMEBEFKCLDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BMEBEFKCLDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNIGOCKMOPL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PIOGMFCHDHK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_PIOGMFCHDHK_OFFSET))(this);
	}

	::System::Int32 LPHONAJLEJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_LPHONAJLEJL_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::String* OEEKMIPCMMK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_OEEKMIPCMMK_OFFSET))(this);
	}

	::System::Int32 OBMJDFGPEHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_OBMJDFGPEHE_OFFSET))(this);
	}

	::System::Int32 AIACMKDIOHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_AIACMKDIOHB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIGOCKMOPL_COFGIJJOFLP_OFFSET))(this);
	}
};
