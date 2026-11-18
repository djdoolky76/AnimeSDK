#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHLCNOMPLID.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HPKKFEEDGOH_COBHFNFAMJC_OFFSET UNITYSDK_OFFSET(0x16100FA0)
#define HPKKFEEDGOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16100D60)
#define HPKKFEEDGOH_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x16100E60)
#define HPKKFEEDGOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16100E50)
#define HPKKFEEDGOH_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x161010E0)
#define HPKKFEEDGOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16101220)
#define HPKKFEEDGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x16100D50)

inline static constexpr unsigned int HPKKFEEDGOH_TypeDefinitionIndex = 14706;

class HPKKFEEDGOH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BHLCNOMPLID HBDPAIKANDB; // 0x18
	::System::Int32 PCCPGAMLEMB; // 0x28
	::System::Int32 OKBBGPGIODD; // 0x2C
	::System::Int32 KIALABKLANK; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::BHLCNOMPLID LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BHLCNOMPLID, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPKKFEEDGOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Int32 COBHFNFAMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_COBHFNFAMJC_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKKFEEDGOH_LJANCIBECFG_OFFSET))(this);
	}
};
