#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MHJEJCEPPPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D87EE0)
#define MHJEJCEPPPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D87E10)
#define MHJEJCEPPPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D87C90)
#define MHJEJCEPPPD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D87ED0)

inline static constexpr unsigned int MHJEJCEPPPD_TypeDefinitionIndex = 42756;

class MHJEJCEPPPD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* IKDGLKPFKEM; // 0x20
	::UnityEngine::GameObject* EABJPIFOIGB; // 0x28
	::UnityEngine::GameObject* ONMEGPJJGCL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJEJCEPPPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHJEJCEPPPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHJEJCEPPPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJEJCEPPPD_KGEBDLGBGNM_OFFSET))(this);
	}
};
