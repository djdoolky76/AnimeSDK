#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/FNINLLPJNKK.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace UnityEngine { class Texture2D; }

#define JOPCOBDEFGN_DCMJNONBJLI_OFFSET UNITYSDK_OFFSET(0x157D6310)
#define JOPCOBDEFGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D4DF0)
#define JOPCOBDEFGN_FFLHIBLFEMD_OFFSET UNITYSDK_OFFSET(0x157D6260)
#define JOPCOBDEFGN_GLAHFBAKMPE_OFFSET UNITYSDK_OFFSET(0x157D5150)
#define JOPCOBDEFGN_GMNGPBDNPBK_OFFSET UNITYSDK_OFFSET(0x157D5590)
#define JOPCOBDEFGN_IMNCKPMMBLI_1_OFFSET UNITYSDK_OFFSET(0x157D5860)
#define JOPCOBDEFGN_IMNCKPMMBLI_OFFSET UNITYSDK_OFFSET(0x157D5060)
#define JOPCOBDEFGN_KCOLIJMFELH_OFFSET UNITYSDK_OFFSET(0x157D53B0)
#define JOPCOBDEFGN_KHLPMEOIEGH_OFFSET UNITYSDK_OFFSET(0x157D5800)
#define JOPCOBDEFGN_OFOPCEHABHO_OFFSET UNITYSDK_OFFSET(0x157D55F0)
#define JOPCOBDEFGN__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4CA0)

inline static constexpr unsigned int JOPCOBDEFGN_TypeDefinitionIndex = 87763;

class JOPCOBDEFGN : public ::System::Object
{
public:
	::System::String* OLNLIMABDON; // 0x10
	::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* EGBBBMAIKNP; // 0x18
	::System::String* NBNKJCEMOHD; // 0x20
	::UnityEngine::Texture2D* HJPGOMCLLDG; // 0x28
	::System::String* HKHIHDAFNGG; // 0x30
	::System::Single NFDDILOOPPE; // 0x38
	::System::Int32 BJBMPILDFDC; // 0x3C
	::System::Int32 BEHEAECNCNI; // 0x40
	::System::Single OCGGPFJEJAH; // 0x44
	::Unity::Collections::NativeArray_1<::UnityEngine::Color32> ECEJOKKFCDD; // 0x48
	::System::Byte _padding0[0x8];
	::System::Single CCDNFNCMJGE; // 0x58
	::System::Single ANEFKBFLIAM; // 0x5C

	::System::Void _ctor(::UnityEngine::Texture2D* GLBPBKDPCBD, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>* KINMLAJFLLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Action_5<::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + JOPCOBDEFGN__CTOR_OFFSET))(this, GLBPBKDPCBD, KINMLAJFLLF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_DISPOSE_OFFSET))(this);
	}

	::System::Void IMNCKPMMBLI(::FNINLLPJNKK GIAEPMKCBIB, ::FNINLLPJNKK DOBFFIICAII, ::System::Single EFEODALHHOI, ::UnityEngine::Color32 JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::FNINLLPJNKK, ::FNINLLPJNKK, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_IMNCKPMMBLI_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, EFEODALHHOI, JBBFCGAMDHI);
	}

	::System::Void GLAHFBAKMPE(::System::Single EKCEOBJKGOA, ::System::Single JJPBJCCGNDC, ::System::Single FBCNNPLFAAG, ::System::Single GOKEGHENOGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_GLAHFBAKMPE_OFFSET))(this, EKCEOBJKGOA, JJPBJCCGNDC, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::MoleMole::Vector2Int KCOLIJMFELH(::System::Single FNIOPKPHDEH, ::System::Single EGEGIMGMJHN)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_KCOLIJMFELH_OFFSET))(this, FNIOPKPHDEH, EGEGIMGMJHN);
	}

	::System::Void GMNGPBDNPBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_GMNGPBDNPBK_OFFSET))(this);
	}

	::System::Void OFOPCEHABHO(::System::Span_1_9011FAD97750D224<::FNINLLPJNKK> CELGKCKLPJC, ::System::Single EFEODALHHOI, ::UnityEngine::Color32 JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::FNINLLPJNKK>, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_OFOPCEHABHO_OFFSET))(this, CELGKCKLPJC, EFEODALHHOI, JBBFCGAMDHI);
	}

	::System::Void KHLPMEOIEGH(::System::String* FBCNNPLFAAG, ::System::String* GOKEGHENOGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_KHLPMEOIEGH_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Void IMNCKPMMBLI_1(::System::Int32 KKLKJNPFNNP, ::System::Int32 BHMADFLJFBL, ::System::Int32 FEFMMPHIDED, ::System::Int32 ODNCPJNEPMM, ::System::Single EFEODALHHOI, ::UnityEngine::Color32 JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_IMNCKPMMBLI_1_OFFSET))(this, KKLKJNPFNNP, BHMADFLJFBL, FEFMMPHIDED, ODNCPJNEPMM, EFEODALHHOI, JBBFCGAMDHI);
	}

	::System::Void FFLHIBLFEMD(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD, ::UnityEngine::Color32 JBBFCGAMDHI, ::System::Single KGHNBNOMMJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Color32, ::System::Single))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_FFLHIBLFEMD_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, JBBFCGAMDHI, KGHNBNOMMJI);
	}

	::System::Void DCMJNONBJLI(::System::String* ONOAGAPJNCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JOPCOBDEFGN_DCMJNONBJLI_OFFSET))(this, ONOAGAPJNCG);
	}
};
