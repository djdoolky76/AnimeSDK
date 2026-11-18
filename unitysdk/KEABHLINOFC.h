#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define KEABHLINOFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x176FB450)
#define KEABHLINOFC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x176FB3A0)
#define KEABHLINOFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x176FB210)
#define KEABHLINOFC__CTOR_OFFSET UNITYSDK_OFFSET(0x176FB440)

inline static constexpr unsigned int KEABHLINOFC_TypeDefinitionIndex = 74329;

class KEABHLINOFC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::LGINJIKKBJA* LBMPDPJKNJH; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEABHLINOFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEABHLINOFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEABHLINOFC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEABHLINOFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
