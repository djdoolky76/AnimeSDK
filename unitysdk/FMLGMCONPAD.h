#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define FMLGMCONPAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E73810)
#define FMLGMCONPAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E73760)
#define FMLGMCONPAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E735E0)
#define FMLGMCONPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E73800)

inline static constexpr unsigned int FMLGMCONPAD_TypeDefinitionIndex = 63457;

class FMLGMCONPAD : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTargetRoleWidgetController*>* CGDPNNKALFO; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTargetImgWidgetController*>* JOEBEECCKAD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGMCONPAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMLGMCONPAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMLGMCONPAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGMCONPAD_KGEBDLGBGNM_OFFSET))(this);
	}
};
