#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"

class ENGKPGFGGLM;
class EPGAAMBIFKB;
class KPNIFGIKELE;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JECFGCKMOMB_ADDALFGPEOL_OFFSET UNITYSDK_OFFSET(0x1383A8B0)
#define JECFGCKMOMB_DLCLLPMBLNG_OFFSET UNITYSDK_OFFSET(0x13839CF0)
#define JECFGCKMOMB_ENCGFPMOLEI_OFFSET UNITYSDK_OFFSET(0x13839CB0)
#define JECFGCKMOMB_GMIONIKPLDP_OFFSET UNITYSDK_OFFSET(0x1383A660)
#define JECFGCKMOMB_HJOCNKAIFPG_OFFSET UNITYSDK_OFFSET(0x13839E10)
#define JECFGCKMOMB_JNCKNPPLECO_OFFSET UNITYSDK_OFFSET(0x1383A430)
#define JECFGCKMOMB_KDICNBGMCDK_OFFSET UNITYSDK_OFFSET(0x1383A860)
#define JECFGCKMOMB_NOAEDNEPEMK_OFFSET UNITYSDK_OFFSET(0x13839D50)
#define JECFGCKMOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x13839DB0)

inline static constexpr unsigned int JECFGCKMOMB_TypeDefinitionIndex = 49923;

class JECFGCKMOMB : public ::ABLPDAPPABA
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* BGMPMGOCIMK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECFGCKMOMB__CTOR_OFFSET))(this);
	}

	::System::Void ENCGFPMOLEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECFGCKMOMB_ENCGFPMOLEI_OFFSET))(this);
	}

	::System::Void DLCLLPMBLNG(::KPNIFGIKELE* IKHJEGECGJA, ::EPGAAMBIFKB* IGNCLPOGNIE, ::System::Single& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*, ::EPGAAMBIFKB*, ::System::Single&))((::PBYTE)hIl2Cpp + JECFGCKMOMB_DLCLLPMBLNG_OFFSET))(this, IKHJEGECGJA, IGNCLPOGNIE, IGAAKDOIPNN);
	}

	::System::Void NOAEDNEPEMK(::System::Int32 HIKMEBGAHHC, ::System::Int32 KDJBOALKBMN, ::System::String* JIMDODOLNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + JECFGCKMOMB_NOAEDNEPEMK_OFFSET))(this, HIKMEBGAHHC, KDJBOALKBMN, JIMDODOLNBE);
	}

	::System::Boolean HJOCNKAIFPG(::System::Int32 HIKMEBGAHHC, ::System::Int32 KDECNMDBNHK, ::System::Boolean MHFEAHGEFAM, ::ENGKPGFGGLM* LIPFIBMPMKK, ::System::Action_1<::KPNIFGIKELE*>* CDKPIJKNFHJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::ENGKPGFGGLM*, ::System::Action_1<::KPNIFGIKELE*>*))((::PBYTE)hIl2Cpp + JECFGCKMOMB_HJOCNKAIFPG_OFFSET))(this, HIKMEBGAHHC, KDECNMDBNHK, MHFEAHGEFAM, LIPFIBMPMKK, CDKPIJKNFHJ);
	}

	::EPGAAMBIFKB* GMIONIKPLDP()
	{
		return ((::EPGAAMBIFKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECFGCKMOMB_GMIONIKPLDP_OFFSET))(this);
	}

	::System::Void KDICNBGMCDK(::System::Int32 KDECNMDBNHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JECFGCKMOMB_KDICNBGMCDK_OFFSET))(this, KDECNMDBNHK);
	}

	::System::Void ADDALFGPEOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECFGCKMOMB_ADDALFGPEOL_OFFSET))(this);
	}

	::System::Single JNCKNPPLECO(::System::Int32 BOBBHFPEPHC, ::System::Boolean HNMNJLFLANO, ::System::Single IENOAGOAHMO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + JECFGCKMOMB_JNCKNPPLECO_OFFSET))(this, BOBBHFPEPHC, HNMNJLFLANO, IENOAGOAHMO);
	}
};
