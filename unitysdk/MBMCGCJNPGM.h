#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLANBBJEIFK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MBMCGCJNPGM_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1BA8FB70)
#define MBMCGCJNPGM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA8F8F0)
#define MBMCGCJNPGM_EMPLKMIOBGN_OFFSET UNITYSDK_OFFSET(0x1BA8F9F0)
#define MBMCGCJNPGM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA8F9E0)
#define MBMCGCJNPGM_GBFPHKPEJKP_OFFSET UNITYSDK_OFFSET(0x1BA8F740)
#define MBMCGCJNPGM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA8F730)
#define MBMCGCJNPGM_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x1BA8FE70)
#define MBMCGCJNPGM_OOGJNLDFOLO_OFFSET UNITYSDK_OFFSET(0x1BA8FCF0)
#define MBMCGCJNPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8F720)

inline static constexpr unsigned int MBMCGCJNPGM_TypeDefinitionIndex = 14116;

class MBMCGCJNPGM : public ::System::Object
{
public:
	::OLANBBJEIFK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 AICFILHLIPF; // 0x28
	::System::Int32 FKKGLHMHJHF; // 0x2C
	::System::Int32 FNPCPGNGNAC; // 0x30
	::System::Int32 CFMLELJAKFK; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Boolean ENALJJBBDDK; // 0x3B

	::System::Void _ctor(::OLANBBJEIFK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OLANBBJEIFK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MBMCGCJNPGM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean GBFPHKPEJKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_GBFPHKPEJKP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EMPLKMIOBGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_EMPLKMIOBGN_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Int32 OOGJNLDFOLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_OOGJNLDFOLO_OFFSET))(this);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMCGCJNPGM_MHKKOFEKPHI_OFFSET))(this);
	}
};
