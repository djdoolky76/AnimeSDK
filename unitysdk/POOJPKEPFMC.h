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

#define POOJPKEPFMC_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x1B9FBA70)
#define POOJPKEPFMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9FB9D0)
#define POOJPKEPFMC_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x1B9FBC30)
#define POOJPKEPFMC_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1B9FBBA0)
#define POOJPKEPFMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9FB900)
#define POOJPKEPFMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9FB730)
#define POOJPKEPFMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FB9C0)

inline static constexpr unsigned int POOJPKEPFMC_TypeDefinitionIndex = 87615;

class POOJPKEPFMC : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* HPELNFEHKCG; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* IKABNDOFHNG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* GGCENIGAJDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJPKEPFMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POOJPKEPFMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJPKEPFMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POOJPKEPFMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POOJPKEPFMC_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::IMLJGFCEKCE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::IMLJGFCEKCE*))((::PBYTE)hIl2Cpp + POOJPKEPFMC_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::POOJPKEPFMC* KDGMEFEJMGJ_1(::IMLJGFCEKCE* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::POOJPKEPFMC*(*)(::IMLJGFCEKCE*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POOJPKEPFMC_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
