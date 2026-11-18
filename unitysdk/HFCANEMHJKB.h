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

#define HFCANEMHJKB_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x13D8AF80)
#define HFCANEMHJKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D8B0B0)
#define HFCANEMHJKB_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x13D8AEE0)
#define HFCANEMHJKB_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x13D8AD50)
#define HFCANEMHJKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D8AC80)
#define HFCANEMHJKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D8AAB0)
#define HFCANEMHJKB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8AD40)

inline static constexpr unsigned int HFCANEMHJKB_TypeDefinitionIndex = 79109;

class HFCANEMHJKB : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* HPELNFEHKCG; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* GGCENIGAJDK; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* IKABNDOFHNG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCANEMHJKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFCANEMHJKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::HFCANEMHJKB* KDGMEFEJMGJ(::IMLJGFCEKCE* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HFCANEMHJKB*(*)(::IMLJGFCEKCE*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFCANEMHJKB_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFCANEMHJKB_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::IMLJGFCEKCE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::IMLJGFCEKCE*))((::PBYTE)hIl2Cpp + HFCANEMHJKB_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFCANEMHJKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCANEMHJKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
