#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTagWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define LIHMMFKGGBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DB0DE0)
#define LIHMMFKGGBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DB0CE0)
#define LIHMMFKGGBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DB0B20)
#define LIHMMFKGGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB0DD0)

inline static constexpr unsigned int LIHMMFKGGBP_TypeDefinitionIndex = 76677;

class LIHMMFKGGBP : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTagWidgetController*>* MLGFGIKKEHK; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTagWidgetController*>* NCNLDGEPMGC; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTagWidgetController*>* AFNBCENOBAK; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTagWidgetController*>* AFNILNGLNOG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMFKGGBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIHMMFKGGBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIHMMFKGGBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMFKGGBP_KGEBDLGBGNM_OFFSET))(this);
	}
};
