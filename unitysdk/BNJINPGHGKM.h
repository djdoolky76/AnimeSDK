#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class MEKABAIJMNM_1;

#define BNJINPGHGKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A021E0)
#define BNJINPGHGKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A02110)
#define BNJINPGHGKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A01F30)
#define BNJINPGHGKM__CTOR_OFFSET UNITYSDK_OFFSET(0x16A021D0)

inline static constexpr unsigned int BNJINPGHGKM_TypeDefinitionIndex = 44528;

class BNJINPGHGKM : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* LEFKOIHLMON; // 0x18
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* IOHJABLJBDG; // 0x28
	::MoleMole::MonoInputKey* FKOBIFAFEGP; // 0x30
	::MoleMole::MonoGamepadCustomList* EBIHJKBPAKO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJINPGHGKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNJINPGHGKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJINPGHGKM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNJINPGHGKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
