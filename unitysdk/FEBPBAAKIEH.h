#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FEBPBAAKIEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140EC5A0)
#define FEBPBAAKIEH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140EC460)
#define FEBPBAAKIEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140EC210)
#define FEBPBAAKIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x140EC590)

inline static constexpr unsigned int FEBPBAAKIEH_TypeDefinitionIndex = 59825;

class FEBPBAAKIEH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MDKJDDANKMP; // 0x18
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x20
	::UnityEngine::Transform* JFDOOELFAOA; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::LGINJIKKBJA* IODBDPOLPKA; // 0x48
	::UnityEngine::Transform* AHKNHJKFDCH; // 0x50
	::UnityEngine::GameObject* LLEPLCNIGKE; // 0x58
	::FGCOIBFFCHB* HHKEMPOBDKA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPBAAKIEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEBPBAAKIEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBPBAAKIEH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEBPBAAKIEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
