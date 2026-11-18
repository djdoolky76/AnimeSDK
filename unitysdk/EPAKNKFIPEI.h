#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGIJHCAJJNP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define EPAKNKFIPEI_AOPDGFNELAN_OFFSET UNITYSDK_OFFSET(0x157B5430)
#define EPAKNKFIPEI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157B5580)
#define EPAKNKFIPEI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157B5570)
#define EPAKNKFIPEI_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x157B5670)
#define EPAKNKFIPEI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157B57B0)
#define EPAKNKFIPEI__CTOR_OFFSET UNITYSDK_OFFSET(0x157B5420)

inline static constexpr unsigned int EPAKNKFIPEI_TypeDefinitionIndex = 9302;

class EPAKNKFIPEI : public ::System::Object
{
public:
	::KGIJHCAJJNP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 CKALBMAMAKP; // 0x2C
	::System::Int32 EHANHACHEIJ; // 0x30

	::System::Void _ctor(::KGIJHCAJJNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGIJHCAJJNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EPAKNKFIPEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 AOPDGFNELAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAKNKFIPEI_AOPDGFNELAN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPAKNKFIPEI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAKNKFIPEI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAKNKFIPEI_LFGIDEIHCID_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAKNKFIPEI_LJANCIBECFG_OFFSET))(this);
	}
};
