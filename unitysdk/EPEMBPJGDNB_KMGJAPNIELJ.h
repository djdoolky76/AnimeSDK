#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPDHCLCNENK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFHAHFCMEL.h"

class CJIEIHEDMME;
class POOOEHMPNLD;
namespace MoleMole { class UIGeneralConsoleExistGoBtnWidgetController; }

#define EPEMBPJGDNB_KMGJAPNIELJ_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x171324B0)
#define EPEMBPJGDNB_KMGJAPNIELJ_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x17132450)
#define EPEMBPJGDNB_KMGJAPNIELJ_JDLCMIDOOIH_OFFSET UNITYSDK_OFFSET(0x17132890)
#define EPEMBPJGDNB_KMGJAPNIELJ_ONIMMALGNPJ_OFFSET UNITYSDK_OFFSET(0x17132940)
#define EPEMBPJGDNB_KMGJAPNIELJ__CTOR_OFFSET UNITYSDK_OFFSET(0x171323F0)

inline static constexpr unsigned int EPEMBPJGDNB_KMGJAPNIELJ_TypeDefinitionIndex = 46295;

class EPEMBPJGDNB_KMGJAPNIELJ : public ::System::Object
{
public:
	::POOOEHMPNLD* CEJENBBHBBG; // 0x10
	::CJIEIHEDMME* DKOGLJIJPAN; // 0x18
	::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* PIDHMJFIKLG; // 0x20
	::EPDHCLCNENK OLKEDCDFHPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_KMGJAPNIELJ__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_KMGJAPNIELJ_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::POOOEHMPNLD* DFMKILICPFB, ::CJIEIHEDMME* IHACKHOBPKG, ::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* FPPPIIFJOBO)
	{
		return ((::System::Void(*)(::PVOID, ::POOOEHMPNLD*, ::CJIEIHEDMME*, ::MoleMole::UIGeneralConsoleExistGoBtnWidgetController*))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_KMGJAPNIELJ_AMEGHCHMIOD_OFFSET))(this, DFMKILICPFB, IHACKHOBPKG, FPPPIIFJOBO);
	}

	::System::Void JDLCMIDOOIH(::PIFHAHFCMEL JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PIFHAHFCMEL))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_KMGJAPNIELJ_JDLCMIDOOIH_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void ONIMMALGNPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEMBPJGDNB_KMGJAPNIELJ_ONIMMALGNPJ_OFFSET))(this);
	}
};
