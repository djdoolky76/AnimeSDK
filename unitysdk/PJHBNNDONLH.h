#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController; }
namespace MoleMole { class UIFlowerMain_RightWidgetController; }
namespace MoleMole { class UIFlowerMain_TopWidgetController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define PJHBNNDONLH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11983360)
#define PJHBNNDONLH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11983260)
#define PJHBNNDONLH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11983040)
#define PJHBNNDONLH__CTOR_OFFSET UNITYSDK_OFFSET(0x11983350)

inline static constexpr unsigned int PJHBNNDONLH_TypeDefinitionIndex = 74860;

class PJHBNNDONLH : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMain_TopWidgetController*>* JIKEHPNIEBP; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMain_LeftWidgetController*>* PFNAFELKHHP; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMain_RightWidgetController*>* BOGHCBIHHBF; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* FLIPLNGOGML; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBNNDONLH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJHBNNDONLH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJHBNNDONLH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBNNDONLH_KGEBDLGBGNM_OFFSET))(this);
	}
};
