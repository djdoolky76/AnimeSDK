#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDDBENJPKA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KLAOLNPABMG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19D9ADB0)
#define KLAOLNPABMG_DMHFABNMEPN_OFFSET UNITYSDK_OFFSET(0x19D9A9B0)
#define KLAOLNPABMG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19D9AEB0)
#define KLAOLNPABMG_HIBACECOBPP_OFFSET UNITYSDK_OFFSET(0x19D9AC50)
#define KLAOLNPABMG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19D9AEA0)
#define KLAOLNPABMG_NDBFPGFMKFH_OFFSET UNITYSDK_OFFSET(0x19D9A870)
#define KLAOLNPABMG_ODMGFJABCMN_OFFSET UNITYSDK_OFFSET(0x19D9AAF0)
#define KLAOLNPABMG_OECGIDOLFPB_OFFSET UNITYSDK_OFFSET(0x19D9AEC0)
#define KLAOLNPABMG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9A860)

inline static constexpr unsigned int KLAOLNPABMG_TypeDefinitionIndex = 15202;

class KLAOLNPABMG : public ::System::Object
{
public:
	::ABDDBENJPKA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Single ANJHGMALMAG; // 0x28
	::System::Single DOBCMICKMHI; // 0x2C
	::System::Single HMDNPEAAPOE; // 0x30
	::System::Int32 LMCBFPGDGDN; // 0x34
	::System::Int32 KAACKLNADIO; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E

	::System::Void _ctor(::ABDDBENJPKA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ABDDBENJPKA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLAOLNPABMG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NDBFPGFMKFH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_NDBFPGFMKFH_OFFSET))(this);
	}

	::System::Int32 DMHFABNMEPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_DMHFABNMEPN_OFFSET))(this);
	}

	::System::Single ODMGFJABCMN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_ODMGFJABCMN_OFFSET))(this);
	}

	::System::Single HIBACECOBPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_HIBACECOBPP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLAOLNPABMG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single OECGIDOLFPB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAOLNPABMG_OECGIDOLFPB_OFFSET))(this);
	}
};
