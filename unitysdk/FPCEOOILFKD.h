#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UINewbieGuideMissionLockedRewardItemRowWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define FPCEOOILFKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D92640)
#define FPCEOOILFKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11D92540)
#define FPCEOOILFKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D92350)
#define FPCEOOILFKD__CTOR_OFFSET UNITYSDK_OFFSET(0x11D92630)

inline static constexpr unsigned int FPCEOOILFKD_TypeDefinitionIndex = 51966;

class FPCEOOILFKD : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadSpaceList* BPBEAGEOKEL; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* BJJLCAJEGLC; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* GGCAHAFCCCD; // 0x30
	::MoleMole::UIGeneralButtonController* PILHKIOCONE; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* CHPFNCBJPPK; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* OCNIMKKMBLB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCEOOILFKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCEOOILFKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCEOOILFKD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCEOOILFKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
