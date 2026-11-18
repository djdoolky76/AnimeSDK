#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define OGKFNGOFBLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F6C240)
#define OGKFNGOFBLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F6C150)
#define OGKFNGOFBLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F6BFA0)
#define OGKFNGOFBLA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6C230)

inline static constexpr unsigned int OGKFNGOFBLA_TypeDefinitionIndex = 72395;

class OGKFNGOFBLA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::FGCOIBFFCHB* DBAMBOEFNMD; // 0x28
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKFNGOFBLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGKFNGOFBLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGKFNGOFBLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKFNGOFBLA_KGEBDLGBGNM_OFFSET))(this);
	}
};
