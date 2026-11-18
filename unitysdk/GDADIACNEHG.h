#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define GDADIACNEHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14133B90)
#define GDADIACNEHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14133AC0)
#define GDADIACNEHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14133920)
#define GDADIACNEHG__CTOR_OFFSET UNITYSDK_OFFSET(0x14133B80)

inline static constexpr unsigned int GDADIACNEHG_TypeDefinitionIndex = 69632;

class GDADIACNEHG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* IKDGLKPFKEM; // 0x18
	::UnityEngine::GameObject* ONMEGPJJGCL; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::UnityEngine::GameObject* EABJPIFOIGB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDADIACNEHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDADIACNEHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDADIACNEHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDADIACNEHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
