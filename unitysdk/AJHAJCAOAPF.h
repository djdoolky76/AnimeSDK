#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define AJHAJCAOAPF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x181F8720)
#define AJHAJCAOAPF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x181F8690)
#define AJHAJCAOAPF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x181F8480)
#define AJHAJCAOAPF__CTOR_OFFSET UNITYSDK_OFFSET(0x181F8710)

inline static constexpr unsigned int AJHAJCAOAPF_TypeDefinitionIndex = 43134;

class AJHAJCAOAPF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HBJPNMHNELP; // 0x18
	::GCIMMDDIFBJ* GLNADJDOHJM; // 0x20
	::MoleMole::MonoGamepadCustomList* MMIDPEMGHNL; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralFilterItemRowWidgetController*>* NOOMBIKGCCG; // 0x30
	::UnityEngine::GameObject* DKALKKBKKOC; // 0x38
	::UnityEngine::GameObject* FHCGAFGPAMH; // 0x40
	::MoleMole::MonoGamepadCustomList* KHJFBLBNINK; // 0x48
	::UnityEngine::GameObject* JGKDHDBDGPH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHAJCAOAPF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHAJCAOAPF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHAJCAOAPF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJHAJCAOAPF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
