#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIAvatarActivityCoinBrushingWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class MEKABAIJMNM_1;

#define HOMDNLPLPBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10126BF0)
#define HOMDNLPLPBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10126B20)
#define HOMDNLPLPBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x101269B0)
#define HOMDNLPLPBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10126BE0)

inline static constexpr unsigned int HOMDNLPLPBJ_TypeDefinitionIndex = 55455;

class HOMDNLPLPBJ : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIAvatarActivityCoinBrushingWidgetController*>* KLKOPANEKLJ; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::CanvasGroup* AMLGJLFOLKE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDNLPLPBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOMDNLPLPBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDNLPLPBJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOMDNLPLPBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
