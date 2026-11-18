#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define LNAPIPFBPOC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C68870)
#define LNAPIPFBPOC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C686E0)
#define LNAPIPFBPOC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C683E0)
#define LNAPIPFBPOC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C68860)

inline static constexpr unsigned int LNAPIPFBPOC_TypeDefinitionIndex = 62442;

class LNAPIPFBPOC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BPEMEIBENJK; // 0x18
	::LGINJIKKBJA* CDDBBPICNFP; // 0x20
	::UnityEngine::RectTransform* GKLEHIGMPJI; // 0x28
	::LGINJIKKBJA* OJPAODAIOFE; // 0x30
	::UnityEngine::RectTransform* GOHLGCJPNCO; // 0x38
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x40
	::LGINJIKKBJA* EMENMPJNOOI; // 0x48
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x50
	::UnityEngine::Animation* NOALGBKIDGN; // 0x58
	::UnityEngine::CanvasGroup* HPLNOEKNJBE; // 0x60
	::UnityEngine::Transform* HNCNEMFBLPC; // 0x68
	::MoleMole::MonoInputKey* DBKHKOGOLNE; // 0x70
	::UnityEngine::RectTransform* JJPKDBALHEE; // 0x78
	::FILNFMCNCFE* KDEMMAEEELF; // 0x80
	::LGINJIKKBJA* BKDDKDMILCA; // 0x88
	::LGINJIKKBJA* MKPEGBHMMHC; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAPIPFBPOC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAPIPFBPOC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAPIPFBPOC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAPIPFBPOC_KGEBDLGBGNM_OFFSET))(this);
	}
};
