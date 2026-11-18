#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class MEKABAIJMNM_1;

#define FJBKGEFAJHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156C0F20)
#define FJBKGEFAJHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156C0E30)
#define FJBKGEFAJHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156C0C60)
#define FJBKGEFAJHH__CTOR_OFFSET UNITYSDK_OFFSET(0x156C0F10)

inline static constexpr unsigned int FJBKGEFAJHH_TypeDefinitionIndex = 42915;

class FJBKGEFAJHH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* EADDCKNAFGG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralPopUpHintWidgetController*>* GGALIJEOHJB; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBKGEFAJHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJBKGEFAJHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBKGEFAJHH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJBKGEFAJHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
