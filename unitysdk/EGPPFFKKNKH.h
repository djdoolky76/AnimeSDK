#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define EGPPFFKKNKH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F2C9E0)
#define EGPPFFKKNKH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F2C8F0)
#define EGPPFFKKNKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F2C760)
#define EGPPFFKKNKH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2C9D0)

inline static constexpr unsigned int EGPPFFKKNKH_TypeDefinitionIndex = 57992;

class EGPPFFKKNKH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x18
	::UnityEngine::UI::Text* EGEMIFNNNEA; // 0x20
	::FGCOIBFFCHB* JFADEKINBNF; // 0x28
	::UnityEngine::GameObject* OAJBJDPMFDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPPFFKKNKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPPFFKKNKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPPFFKKNKH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPPFFKKNKH_KGEBDLGBGNM_OFFSET))(this);
	}
};
