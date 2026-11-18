#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIVideoSetDetailWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class MEKABAIJMNM_1;

#define OLMFIGPNGHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F84A50)
#define OLMFIGPNGHJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F84910)
#define OLMFIGPNGHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F84680)
#define OLMFIGPNGHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84A40)

inline static constexpr unsigned int OLMFIGPNGHJ_TypeDefinitionIndex = 84185;

class OLMFIGPNGHJ : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* IFCDKHEAGKH; // 0x18
	::UnityEngine::Transform* MFGCDHEPLPM; // 0x20
	::UnityEngine::GameObject* IDIOIFDLMJI; // 0x28
	::FGCOIBFFCHB* CBHNPIPFHEA; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIGeneralSortWidgetController*>* ICONPHLDHDH; // 0x38
	::LGINJIKKBJA* OEDEEHBMCBL; // 0x40
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x48
	::MoleMole::MonoGamepadNavigatableList* NMDOFPFNJAN; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIVideoSetDetailWidgetController*>* PAACALGOBBM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMFIGPNGHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLMFIGPNGHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMFIGPNGHJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLMFIGPNGHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
