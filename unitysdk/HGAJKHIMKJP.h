#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/EKHHOGLJLGH.h"
#include "unitysdk/KAPINBBMLDJ.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class FOLOGHLENFB;
namespace System { class String; }

#define HGAJKHIMKJP_AALJAAGIBGJ_OFFSET UNITYSDK_OFFSET(0x13D8C200)
#define HGAJKHIMKJP_CMIDJIKAAMN_OFFSET UNITYSDK_OFFSET(0x13D8C060)
#define HGAJKHIMKJP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x13D8BF90)
#define HGAJKHIMKJP_DBJKFIOOKKN_OFFSET UNITYSDK_OFFSET(0x13D8C1F0)
#define HGAJKHIMKJP_DHIGDHIFMOO_OFFSET UNITYSDK_OFFSET(0x13D8BF40)
#define HGAJKHIMKJP_FCCINGJHEJK_OFFSET UNITYSDK_OFFSET(0x13D8C300)
#define HGAJKHIMKJP_FNFEFGIGIJI_OFFSET UNITYSDK_OFFSET(0x13D8BE00)
#define HGAJKHIMKJP_GKILDJBDCAP_OFFSET UNITYSDK_OFFSET(0x13D8BDF0)
#define HGAJKHIMKJP_HIKCEMKAGJO_OFFSET UNITYSDK_OFFSET(0x13D8C2F0)
#define HGAJKHIMKJP_IKIOJJBIHCG_OFFSET UNITYSDK_OFFSET(0x13D8C210)
#define HGAJKHIMKJP_MFPLKMFPPLK_OFFSET UNITYSDK_OFFSET(0x13D8BEF0)
#define HGAJKHIMKJP_OAOOBACHAAD_OFFSET UNITYSDK_OFFSET(0x13D8BDB0)
#define HGAJKHIMKJP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D8C1E0)
#define HGAJKHIMKJP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8BE10)

inline static constexpr unsigned int HGAJKHIMKJP_TypeDefinitionIndex = 53073;

class HGAJKHIMKJP : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_FFPLLIBFIKM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HGAJKHIMKJP_TypeDefinitionIndex)->GetStaticField(0x120D0);
	}
	::FOLOGHLENFB* DJOIBDNKGII; // 0x10
	::EKHHOGLJLGH AHOFKAPIHJD; // 0x18
	::System::String* KADAMEBKGDF; // 0x28
	::System::Boolean PNJIKAFDDIJ; // 0x30
	::System::Boolean PGCPBOMEPOG; // 0x31
	::System::Byte _padding0[0x2];
	::System::Int32 KIABHHICGNG; // 0x34
	::System::Boolean MNJHNHFOPCK; // 0x38
	::System::Boolean BHLLFKICOHC; // 0x39
	::System::Boolean NPOELMNNIJA; // 0x3A
	::System::Boolean KADBHDIPPAK; // 0x3B
	::System::Int32 _NGCIMOJGAPL_k__BackingField; // 0x3C
	::System::Int32 MBKKMEHCOHF; // 0x40
	::EAOGLMKGMGE JIIFPGJLMMD; // 0x44
	::System::UInt64 KGIOFDBFGAM; // 0x50
	::KAPINBBMLDJ FNCKLGPBCLF; // 0x58
	::System::Boolean ONOLHEOOCPB; // 0x5C
	::System::Boolean NCBAENLLNOD; // 0x5D
	::Share::EItemType _PDMPENBEAJK_k__BackingField; // 0x5E
	::System::Int32 PNIOHMOJIFN; // 0x60
	::System::Int32 _OKFEMBOBKBI_k__BackingField; // 0x64
	::System::Int32 JHFKDGBCOBA; // 0x68
	::System::Int32 OIKFFGKDHME; // 0x6C

	::System::Void _ctor(::System::UInt64 KGIOFDBFGAM, ::System::Int32 OIKFFGKDHME, ::FOLOGHLENFB* DFMKILICPFB, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + HGAJKHIMKJP__CTOR_OFFSET))(this, KGIOFDBFGAM, OIKFFGKDHME, DFMKILICPFB, OHOGDOMNHNK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGAJKHIMKJP__CCTOR_OFFSET))();
	}

	::System::Void OAOOBACHAAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_OAOOBACHAAD_OFFSET))(this);
	}

	::Share::EItemType GKILDJBDCAP()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_GKILDJBDCAP_OFFSET))(this);
	}

	::System::Int32 FNFEFGIGIJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_FNFEFGIGIJI_OFFSET))(this);
	}

	::System::Void MFPLKMFPPLK(::CFMGIKJLMBJ* JKHIHIBHDPH)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_MFPLKMFPPLK_OFFSET))(this, JKHIHIBHDPH);
	}

	::System::Boolean DHIGDHIFMOO(::CFMGIKJLMBJ* JKHIHIBHDPH)
	{
		return ((::System::Boolean(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_DHIGDHIFMOO_OFFSET))(this, JKHIHIBHDPH);
	}

	::System::Int32 CompareTo(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_COMPARETO_OFFSET))(this, EIFONLCJOPG);
	}

	::HGAJKHIMKJP* CMIDJIKAAMN()
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_CMIDJIKAAMN_OFFSET))(this);
	}

	::System::Void DBJKFIOOKKN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_DBJKFIOOKKN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AALJAAGIBGJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_AALJAAGIBGJ_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::HGAJKHIMKJP* IKIOJJBIHCG(::HGAJKHIMKJP* HODAIDNDKHD, ::HGAJKHIMKJP* GGNCOAPMEDN)
	{
		return ((::HGAJKHIMKJP*(*)(::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_IKIOJJBIHCG_OFFSET))(HODAIDNDKHD, GGNCOAPMEDN);
	}

	::System::Int32 HIKCEMKAGJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_HIKCEMKAGJO_OFFSET))(this);
	}

	::System::Int32 FCCINGJHEJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAJKHIMKJP_FCCINGJHEJK_OFFSET))(this);
	}
};
