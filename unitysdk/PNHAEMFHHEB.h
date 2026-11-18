#pragma once
#include "unitysdk/unitysdk.h"

class CDMAIMPNFHB;
namespace System { class String; }

#define PNHAEMFHHEB_BEKGLBAEBBP_OFFSET UNITYSDK_OFFSET(0x1A801CD0)
#define PNHAEMFHHEB_CKNJGNLKBKI_OFFSET UNITYSDK_OFFSET(0x1A801A90)
#define PNHAEMFHHEB_COPHPNHODAA_OFFSET UNITYSDK_OFFSET(0x1A801B00)
#define PNHAEMFHHEB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A801970)
#define PNHAEMFHHEB_HIAHECGPIDE_OFFSET UNITYSDK_OFFSET(0x1A801C30)
#define PNHAEMFHHEB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A801BB0)
#define PNHAEMFHHEB_JLHGDBBIBMC_OFFSET UNITYSDK_OFFSET(0x1A801BA0)
#define PNHAEMFHHEB_KGLGKOINPOB_OFFSET UNITYSDK_OFFSET(0x1A801E10)
#define PNHAEMFHHEB_KGOILAKMONL_OFFSET UNITYSDK_OFFSET(0x1A801D70)
#define PNHAEMFHHEB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1A801CE0)
#define PNHAEMFHHEB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A801A40)
#define PNHAEMFHHEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8019C0)
#define PNHAEMFHHEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A801AF0)

inline static constexpr unsigned int PNHAEMFHHEB_TypeDefinitionIndex = 87067;

class PNHAEMFHHEB
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x23E; // 0x0
	::CDMAIMPNFHB* GOBFCIGINHD; // 0x58
	::System::String* FIBGKOJCABE; // 0x60
	::System::Boolean DCPJIKJBACK; // 0x68
	::System::Boolean EOJEABJDOMC; // 0x69
	::System::Boolean BBMDLLIKCKM; // 0x6A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHAEMFHHEB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean CKNJGNLKBKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_CKNJGNLKBKI_OFFSET))(this);
	}

	::System::Void COPHPNHODAA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_COPHPNHODAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JLHGDBBIBMC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_JLHGDBBIBMC_OFFSET))(this);
	}

	static ::PNHAEMFHHEB* JFDOOELFAOA()
	{
		return ((::PNHAEMFHHEB*(*)())((::PBYTE)hIl2Cpp + PNHAEMFHHEB_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HIAHECGPIDE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_HIAHECGPIDE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BEKGLBAEBBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_BEKGLBAEBBP_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void KGOILAKMONL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_KGOILAKMONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KGLGKOINPOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHAEMFHHEB_KGLGKOINPOB_OFFSET))(this);
	}
};
