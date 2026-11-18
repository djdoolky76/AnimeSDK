#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class CEIAAPADPPO;
class FBAMLABJMKF;
class FPIKPLKEADC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCMBIDLJDME_AAEPLCDNCAF_OFFSET UNITYSDK_OFFSET(0x169E2840)
#define BCMBIDLJDME_BBIHPICHNMA_OFFSET UNITYSDK_OFFSET(0x169E3830)
#define BCMBIDLJDME_BIGPNFOKMHI_1_OFFSET UNITYSDK_OFFSET(0x169E3500)
#define BCMBIDLJDME_BIGPNFOKMHI_OFFSET UNITYSDK_OFFSET(0x169E3210)
#define BCMBIDLJDME_DANMIKNHAIJ_OFFSET UNITYSDK_OFFSET(0x169E2C30)
#define BCMBIDLJDME_DECJCOHAMEI_OFFSET UNITYSDK_OFFSET(0x169E30A0)
#define BCMBIDLJDME_DIDHDKBPIBH_1_OFFSET UNITYSDK_OFFSET(0x169E3700)
#define BCMBIDLJDME_DIDHDKBPIBH_OFFSET UNITYSDK_OFFSET(0x169E3600)
#define BCMBIDLJDME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169E2530)
#define BCMBIDLJDME_ECDOOPIBNOC_OFFSET UNITYSDK_OFFSET(0x169E3330)
#define BCMBIDLJDME_JHNNFEMNJKO_OFFSET UNITYSDK_OFFSET(0x169E3910)
#define BCMBIDLJDME_MPHLPKEGNOE_OFFSET UNITYSDK_OFFSET(0x169E2D60)
#define BCMBIDLJDME_OPOHPNOPABA_OFFSET UNITYSDK_OFFSET(0x169E2F00)
#define BCMBIDLJDME_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x169E3A90)
#define BCMBIDLJDME__CTOR_OFFSET UNITYSDK_OFFSET(0x169E23C0)

inline static constexpr unsigned int BCMBIDLJDME_TypeDefinitionIndex = 43652;

class BCMBIDLJDME : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CEIAAPADPPO*>* GEALNACPJMJ; // 0x10
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x18
	::System::Collections::Generic::List_1<::CEIAAPADPPO*>* CCMOPJOBBOM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::FPIKPLKEADC*>* AIDNIPPLCJO; // 0x28
	::System::UInt32 BIJIPJPJJPJ; // 0x30

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + BCMBIDLJDME__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMBIDLJDME_DISPOSE_OFFSET))(this);
	}

	::CEIAAPADPPO* AAEPLCDNCAF(::FPIKPLKEADC* IOFFFEFJMOB, ::System::Boolean IPDJOJMPGAK)
	{
		return ((::CEIAAPADPPO*(*)(::PVOID, ::FPIKPLKEADC*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCMBIDLJDME_AAEPLCDNCAF_OFFSET))(this, IOFFFEFJMOB, IPDJOJMPGAK);
	}

	::System::Void DANMIKNHAIJ(::System::String* CFJPKNDJAFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_DANMIKNHAIJ_OFFSET))(this, CFJPKNDJAFF);
	}

	::System::Void MPHLPKEGNOE(::System::String* CFJPKNDJAFF, ::System::Nullable_1<::System::Object*> KGNCCBKIHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + BCMBIDLJDME_MPHLPKEGNOE_OFFSET))(this, CFJPKNDJAFF, KGNCCBKIHJE);
	}

	::System::Void DECJCOHAMEI(::CEIAAPADPPO* OLHEDAGPPMO)
	{
		return ((::System::Void(*)(::PVOID, ::CEIAAPADPPO*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_DECJCOHAMEI_OFFSET))(this, OLHEDAGPPMO);
	}

	::System::Void BIGPNFOKMHI(::CEIAAPADPPO* OLHEDAGPPMO)
	{
		return ((::System::Void(*)(::PVOID, ::CEIAAPADPPO*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_BIGPNFOKMHI_OFFSET))(this, OLHEDAGPPMO);
	}

	::FPIKPLKEADC* ECDOOPIBNOC(::System::String* CFJPKNDJAFF)
	{
		return ((::FPIKPLKEADC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_ECDOOPIBNOC_OFFSET))(this, CFJPKNDJAFF);
	}

	static ::FPIKPLKEADC* OPOHPNOPABA(::System::String* CFJPKNDJAFF)
	{
		return ((::FPIKPLKEADC*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_OPOHPNOPABA_OFFSET))(CFJPKNDJAFF);
	}

	::System::Void BIGPNFOKMHI_1(::System::UInt32 KLNDNADNLIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCMBIDLJDME_BIGPNFOKMHI_1_OFFSET))(this, KLNDNADNLIB);
	}

	::System::Void DIDHDKBPIBH(::System::UInt32 KLNDNADNLIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCMBIDLJDME_DIDHDKBPIBH_OFFSET))(this, KLNDNADNLIB);
	}

	::CEIAAPADPPO* BBIHPICHNMA(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::CEIAAPADPPO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCMBIDLJDME_BBIHPICHNMA_OFFSET))(this, ACHBBPJIBIE);
	}

	::CEIAAPADPPO* JHNNFEMNJKO(::System::String* NCHCMKEAHCD, ::System::Boolean IPDJOJMPGAK)
	{
		return ((::CEIAAPADPPO*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCMBIDLJDME_JHNNFEMNJKO_OFFSET))(this, NCHCMKEAHCD, IPDJOJMPGAK);
	}

	::System::Void DIDHDKBPIBH_1(::CEIAAPADPPO* OLHEDAGPPMO)
	{
		return ((::System::Void(*)(::PVOID, ::CEIAAPADPPO*))((::PBYTE)hIl2Cpp + BCMBIDLJDME_DIDHDKBPIBH_1_OFFSET))(this, OLHEDAGPPMO);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCMBIDLJDME_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}
};
