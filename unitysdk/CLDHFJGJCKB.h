#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLDHFJGJCKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A34140)
#define CLDHFJGJCKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A34030)
#define CLDHFJGJCKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A33E20)
#define CLDHFJGJCKB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A34130)

inline static constexpr unsigned int CLDHFJGJCKB_TypeDefinitionIndex = 54761;

class CLDHFJGJCKB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x18
	::UnityEngine::RectTransform* IPAJICIFKAC; // 0x20
	::MonoUITableScrollV2* MMJCBBOAPHH; // 0x28
	::MoleMole::MonoGamepadTabButtonGroup* HADHPNLMPEP; // 0x30
	::LGINJIKKBJA* ICBGFIGNFJP; // 0x38
	::UnityEngine::RectTransform* BFJEIFHDGCE; // 0x40
	::UnityEngine::Transform* MBKACMJJMBH; // 0x48
	::LGINJIKKBJA* CJNBEMOEHCE; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* KNCEOGGFGLA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDHFJGJCKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLDHFJGJCKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLDHFJGJCKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDHFJGJCKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
