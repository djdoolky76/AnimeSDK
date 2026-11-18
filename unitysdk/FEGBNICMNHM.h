#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIVHSStoreLimitBtnsWidgetController; }
namespace MoleMole { class UIVHSStoreLimitRoleInfoWidgetController; }
namespace MoleMole { class UIVHSStoreRecommandWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define FEGBNICMNHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC33C0)
#define FEGBNICMNHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14AC32B0)
#define FEGBNICMNHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC3070)
#define FEGBNICMNHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC33B0)

inline static constexpr unsigned int FEGBNICMNHM_TypeDefinitionIndex = 39476;

class FEGBNICMNHM : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIVHSStoreRecommandWidgetController*>* LMIOGGDFFCE; // 0x18
	::UnityEngine::GameObject* MNMIPGHCKLO; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIVHSStoreLimitRoleInfoWidgetController*>* HNNIMFHFFOB; // 0x28
	::MoleMole::MonoGamepadModule* AEJKDLGNHOM; // 0x30
	::MoleMole::MonoGamepadModule* NJPOHKCNMNF; // 0x38
	::MonoUITableScrollV2* CKFIFLHJMPF; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIVHSStoreLimitBtnsWidgetController*>* KHKLBHLONKL; // 0x48
	::MoleMole::MonoGamepadRegion* MAIJMGKCKKO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGBNICMNHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEGBNICMNHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEGBNICMNHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGBNICMNHM_KGEBDLGBGNM_OFFSET))(this);
	}
};
