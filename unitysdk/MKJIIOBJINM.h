#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MKJIIOBJINM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D91A90)
#define MKJIIOBJINM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D919C0)
#define MKJIIOBJINM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D91850)
#define MKJIIOBJINM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D91A80)

inline static constexpr unsigned int MKJIIOBJINM_TypeDefinitionIndex = 40659;

class MKJIIOBJINM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x20
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJIIOBJINM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKJIIOBJINM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKJIIOBJINM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJIIOBJINM_KGEBDLGBGNM_OFFSET))(this);
	}
};
