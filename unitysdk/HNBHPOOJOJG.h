#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJGBALGMMNE.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNBHPOOJOJG_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1E8C6D70)
#define HNBHPOOJOJG_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1E8C6B70)
#define HNBHPOOJOJG_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1E8C6AC0)
#define HNBHPOOJOJG_HLCLDFONIAM_OFFSET UNITYSDK_OFFSET(0x1E8C7550)
#define HNBHPOOJOJG_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1E8C6BB0)
#define HNBHPOOJOJG_IIBLFOJHPED_OFFSET UNITYSDK_OFFSET(0x1E8C7570)
#define HNBHPOOJOJG_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1E8C69D0)
#define HNBHPOOJOJG_JFLONBPIOKO_OFFSET UNITYSDK_OFFSET(0x1E8C7590)
#define HNBHPOOJOJG_KMGFINCKGOK_OFFSET UNITYSDK_OFFSET(0x1E8C7580)
#define HNBHPOOJOJG_OMOGBNDPFKI_OFFSET UNITYSDK_OFFSET(0x1E8C7560)
#define HNBHPOOJOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7540)

inline static constexpr unsigned int HNBHPOOJOJG_TypeDefinitionIndex = 96469;

class HNBHPOOJOJG : public ::NJGBALGMMNE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_HDGDNIDFKCG_OFFSET))(this);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void HLCLDFONIAM(::DMFCAPLHHON* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_HLCLDFONIAM_OFFSET))(this, MIALFKCCCPI);
	}

	::EAIOHODECAO* OMOGBNDPFKI(::System::UInt64 MIALFKCCCPI, ::DMFCAPLHHON* KMGKAIDEIBA, ::System::String* FDHMCIFPNCK, ::System::String* MPBJAGIKPJM)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_OMOGBNDPFKI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* IIBLFOJHPED()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_IIBLFOJHPED_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* KMGFINCKGOK()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_KMGFINCKGOK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* JFLONBPIOKO()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBHPOOJOJG_JFLONBPIOKO_OFFSET))(this);
	}
};
