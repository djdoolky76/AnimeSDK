#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityBossChallengeHardInfoWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define FNPIOCENHLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13234470)
#define FNPIOCENHLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132343E0)
#define FNPIOCENHLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13234270)
#define FNPIOCENHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x13234460)

inline static constexpr unsigned int FNPIOCENHLO_TypeDefinitionIndex = 63813;

class FNPIOCENHLO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BDBHPNDODOM; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIActivityBossChallengeHardInfoWidgetController*>* KFJAHIMPHBN; // 0x20
	::MonoUITableScrollV2* EMHCNBDJHDB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPIOCENHLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNPIOCENHLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPIOCENHLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNPIOCENHLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
