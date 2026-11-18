#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class IMLJGFCEKCE;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define PCHMJMHJJAC_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x19498060)
#define PCHMJMHJJAC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19498190)
#define PCHMJMHJJAC_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x19497FC0)
#define PCHMJMHJJAC_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x19497E30)
#define PCHMJMHJJAC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19497D60)
#define PCHMJMHJJAC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19497B90)
#define PCHMJMHJJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x19497E20)

inline static constexpr unsigned int PCHMJMHJJAC_TypeDefinitionIndex = 48942;

class PCHMJMHJJAC : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* HPELNFEHKCG; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* GGCENIGAJDK; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* IKABNDOFHNG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHMJMHJJAC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::PCHMJMHJJAC* KDGMEFEJMGJ(::IMLJGFCEKCE* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::PCHMJMHJJAC*(*)(::IMLJGFCEKCE*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ_1(::IMLJGFCEKCE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::IMLJGFCEKCE*))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHMJMHJJAC_KGEBDLGBGNM_OFFSET))(this);
	}
};
