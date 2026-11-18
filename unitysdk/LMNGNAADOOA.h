#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define LMNGNAADOOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14036250)
#define LMNGNAADOOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140361A0)
#define LMNGNAADOOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14036010)
#define LMNGNAADOOA__CTOR_OFFSET UNITYSDK_OFFSET(0x14036240)

inline static constexpr unsigned int LMNGNAADOOA_TypeDefinitionIndex = 64368;

class LMNGNAADOOA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LBMPDPJKNJH; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNGNAADOOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMNGNAADOOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNGNAADOOA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMNGNAADOOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
