#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define IMLJGFCEKCE_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x153C2460)
#define IMLJGFCEKCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x153C25C0)
#define IMLJGFCEKCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153C2360)
#define IMLJGFCEKCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153C2190)
#define IMLJGFCEKCE_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x153C2520)
#define IMLJGFCEKCE__CTOR_OFFSET UNITYSDK_OFFSET(0x153C2510)

inline static constexpr unsigned int IMLJGFCEKCE_TypeDefinitionIndex = 72162;

class IMLJGFCEKCE : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* IKABNDOFHNG; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* GGCENIGAJDK; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* HPELNFEHKCG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLJGFCEKCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMLJGFCEKCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + IMLJGFCEKCE_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLJGFCEKCE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + IMLJGFCEKCE_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMLJGFCEKCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
