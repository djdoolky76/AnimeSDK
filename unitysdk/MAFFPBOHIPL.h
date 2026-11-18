#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MAFFPBOHIPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DD77D0)
#define MAFFPBOHIPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DD76B0)
#define MAFFPBOHIPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DD73E0)
#define MAFFPBOHIPL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD77C0)

inline static constexpr unsigned int MAFFPBOHIPL_TypeDefinitionIndex = 51985;

class MAFFPBOHIPL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::GCIMMDDIFBJ* GHGDDMEPIGF; // 0x28
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x30
	::LGINJIKKBJA* MKPEGBHMMHC; // 0x38
	::UnityEngine::RectTransform* GOHLGCJPNCO; // 0x40
	::GCIMMDDIFBJ* NOALGBKIDGN; // 0x48
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x50
	::UnityEngine::RectTransform* BPEMEIBENJK; // 0x58
	::LGINJIKKBJA* OJPAODAIOFE; // 0x60
	::UnityEngine::CanvasGroup* HPLNOEKNJBE; // 0x68
	::FILNFMCNCFE* KDEMMAEEELF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFFPBOHIPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAFFPBOHIPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAFFPBOHIPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFFPBOHIPL_KGEBDLGBGNM_OFFSET))(this);
	}
};
