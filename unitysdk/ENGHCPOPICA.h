#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class MEKABAIJMNM_1;

#define ENGHCPOPICA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F47170)
#define ENGHCPOPICA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F470A0)
#define ENGHCPOPICA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F46EB0)
#define ENGHCPOPICA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F47160)

inline static constexpr unsigned int ENGHCPOPICA_TypeDefinitionIndex = 83665;

class ENGHCPOPICA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* NHCCOAPFEHK; // 0x18
	::LGINJIKKBJA* KBMAPPAJDEB; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NIENBJEFKAF; // 0x30
	::MoleMole::UIGeneralButtonController* CGOBDCLIIDH; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHCPOPICA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGHCPOPICA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGHCPOPICA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHCPOPICA_KGEBDLGBGNM_OFFSET))(this);
	}
};
