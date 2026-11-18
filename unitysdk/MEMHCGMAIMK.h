#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOperationYumMainWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class MEKABAIJMNM_1;

#define MEMHCGMAIMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D57FE0)
#define MEMHCGMAIMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D57EA0)
#define MEMHCGMAIMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D57BB0)
#define MEMHCGMAIMK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D57FD0)

inline static constexpr unsigned int MEMHCGMAIMK_TypeDefinitionIndex = 89653;

class MEMHCGMAIMK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIOperationYumMainWidgetController*>* KPKHIOBLGEP; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::GCIMMDDIFBJ* IJEEGHDMADB; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIOperationYumMainWidgetController*>* EHCDLJGJBEL; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIOperationYumMainWidgetController*>* CKOFEBOFKEP; // 0x40
	::UnityEngine::RectTransform* AADAFNEGEEL; // 0x48
	::MoleMole::MonoGamepadCustomList* JHOFCCAMIFD; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* FAGMEMGEGFP; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* FJMOFGDNDFC; // 0x60
	::GCIMMDDIFBJ* HDAKFNAPBBA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHCGMAIMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEMHCGMAIMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMHCGMAIMK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEMHCGMAIMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
