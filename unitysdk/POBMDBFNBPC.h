#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGDEBLNKPOB.h"
#include "unitysdk/FCNNDGBMNAK.h"
#include "unitysdk/KEHIKMMFFHH.h"
#include "unitysdk/MFLNBPMNMFG.h"
#include "unitysdk/NCEIPIMHKOD.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class OCIKBEJKPCB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POBMDBFNBPC_BHAGJDDCJCC_OFFSET UNITYSDK_OFFSET(0x1A8049C0)
#define POBMDBFNBPC_CDMFHECFHPI_OFFSET UNITYSDK_OFFSET(0x1A804D40)
#define POBMDBFNBPC_EKAFPMMCPKB_OFFSET UNITYSDK_OFFSET(0x1A803170)
#define POBMDBFNBPC_GPNKGBCDJAK_OFFSET UNITYSDK_OFFSET(0x1A803330)
#define POBMDBFNBPC_HLJEPNMMBHJ_OFFSET UNITYSDK_OFFSET(0x1A8035C0)
#define POBMDBFNBPC_KAGFPALNIHA_OFFSET UNITYSDK_OFFSET(0x1A804AF0)
#define POBMDBFNBPC_KDOIHGBFLFN_OFFSET UNITYSDK_OFFSET(0x1A8037B0)
#define POBMDBFNBPC_LAKMBBHNJIA_OFFSET UNITYSDK_OFFSET(0x1A804890)
#define POBMDBFNBPC_LBANOCAGGGC_OFFSET UNITYSDK_OFFSET(0x1A8031D0)
#define POBMDBFNBPC_PMHLJGNHIFJ_OFFSET UNITYSDK_OFFSET(0x1A803A40)
#define POBMDBFNBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A802F10)

inline static constexpr unsigned int POBMDBFNBPC_TypeDefinitionIndex = 39359;

class POBMDBFNBPC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::PONEGOPCLPF, ::PONEGOPCLPF>, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::System::Action*>*>* GADIGJHLDPP; // 0x10
	::System::Collections::Generic::List_1<::OCIKBEJKPCB*>* PKIKMKPIPFP; // 0x18
	::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::MFLNBPMNMFG>*>* MBMDNDPEJGL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::PONEGOPCLPF, ::PONEGOPCLPF>, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::EGDEBLNKPOB>*>* MJKKEDNJPJK; // 0x28
	::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::NCEIPIMHKOD>* GEOGJIKIHAO; // 0x30
	::FCNNDGBMNAK AHOFDPDJEKD; // 0x38
	::System::Nullable_1<::PONEGOPCLPF> MBEAAIAKHGO; // 0x3C

	::System::Void _ctor(::System::Boolean MEBJHDBBLKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POBMDBFNBPC__CTOR_OFFSET))(this, MEBJHDBBLKI);
	}

	::System::Void EKAFPMMCPKB(::PONEGOPCLPF JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + POBMDBFNBPC_EKAFPMMCPKB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Boolean LBANOCAGGGC(::OCIKBEJKPCB* DICPEDGFHBH, ::PONEGOPCLPF JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCIKBEJKPCB*, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + POBMDBFNBPC_LBANOCAGGGC_OFFSET))(this, DICPEDGFHBH, JKBLDFBGBPK);
	}

	::System::Void GPNKGBCDJAK(::PONEGOPCLPF OJBJPFBIMPJ, ::PONEGOPCLPF FDDFDLEINFM, ::OCIKBEJKPCB* DICPEDGFHBH, ::KEHIKMMFFHH CKNLPIHAFLM, ::FCNNDGBMNAK FMLKMLCKIPM)
	{
		return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF, ::OCIKBEJKPCB*, ::KEHIKMMFFHH, ::FCNNDGBMNAK))((::PBYTE)hIl2Cpp + POBMDBFNBPC_GPNKGBCDJAK_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM, DICPEDGFHBH, CKNLPIHAFLM, FMLKMLCKIPM);
	}

	::System::Void HLJEPNMMBHJ(::OCIKBEJKPCB* DICPEDGFHBH)
	{
		return ((::System::Void(*)(::PVOID, ::OCIKBEJKPCB*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_HLJEPNMMBHJ_OFFSET))(this, DICPEDGFHBH);
	}

	::System::Void KDOIHGBFLFN(::PONEGOPCLPF JKBLDFBGBPK, ::OCIKBEJKPCB* DICPEDGFHBH, ::System::Action* PPGNHAPPHCH, ::System::Action* BHFBEHKHNPI, ::System::Action* EPKKNJMIADC, ::System::Action* OGDNFIIBKIK)
	{
		return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::OCIKBEJKPCB*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_KDOIHGBFLFN_OFFSET))(this, JKBLDFBGBPK, DICPEDGFHBH, PPGNHAPPHCH, BHFBEHKHNPI, EPKKNJMIADC, OGDNFIIBKIK);
	}

	::System::Void PMHLJGNHIFJ(::PONEGOPCLPF DHCBFLEEJHM, ::PONEGOPCLPF ANOHIDIPEMN)
	{
		return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + POBMDBFNBPC_PMHLJGNHIFJ_OFFSET))(this, DHCBFLEEJHM, ANOHIDIPEMN);
	}

	static ::System::Void BHAGJDDCJCC(::OCIKBEJKPCB* DICPEDGFHBH, ::NCEIPIMHKOD HDDOGGDDGFF, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::MFLNBPMNMFG>* FHMNLOGJBMN)
	{
		return ((::System::Void(*)(::OCIKBEJKPCB*, ::NCEIPIMHKOD, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::MFLNBPMNMFG>*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_BHAGJDDCJCC_OFFSET))(DICPEDGFHBH, HDDOGGDDGFF, FHMNLOGJBMN);
	}

	static ::System::Void LAKMBBHNJIA(::OCIKBEJKPCB* DICPEDGFHBH, ::NCEIPIMHKOD HDDOGGDDGFF, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::MFLNBPMNMFG>* LCKEJGDHCMB)
	{
		return ((::System::Void(*)(::OCIKBEJKPCB*, ::NCEIPIMHKOD, ::System::Collections::Generic::Dictionary_2<::OCIKBEJKPCB*, ::MFLNBPMNMFG>*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_LAKMBBHNJIA_OFFSET))(DICPEDGFHBH, HDDOGGDDGFF, LCKEJGDHCMB);
	}

	::System::Void KAGFPALNIHA(::OCIKBEJKPCB* DICPEDGFHBH, ::System::Action* GOJANLKLLEJ, ::System::Action* DJALGKFNGDK, ::System::Action* BJGEDKECFIK, ::System::Action* OLNPOFGIKIJ)
	{
		return ((::System::Void(*)(::PVOID, ::OCIKBEJKPCB*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_KAGFPALNIHA_OFFSET))(this, DICPEDGFHBH, GOJANLKLLEJ, DJALGKFNGDK, BJGEDKECFIK, OLNPOFGIKIJ);
	}

	::System::Void CDMFHECFHPI(::PONEGOPCLPF OJBJPFBIMPJ, ::PONEGOPCLPF FDDFDLEINFM, ::OCIKBEJKPCB* DICPEDGFHBH, ::System::Action* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF, ::OCIKBEJKPCB*, ::System::Action*))((::PBYTE)hIl2Cpp + POBMDBFNBPC_CDMFHECFHPI_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM, DICPEDGFHBH, JMDHBJMNBCP);
	}
};
