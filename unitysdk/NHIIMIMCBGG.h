#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NHIIMIMCBGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1314A5F0)
#define NHIIMIMCBGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1314A520)
#define NHIIMIMCBGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1314A260)
#define NHIIMIMCBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1314A5E0)

inline static constexpr unsigned int NHIIMIMCBGG_TypeDefinitionIndex = 68293;

class NHIIMIMCBGG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FIDLAJCHAIP; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::GCIMMDDIFBJ* MNHKNMFOAOD; // 0x28
	::UnityEngine::GameObject* KJEIILKGMPC; // 0x30
	::GCIMMDDIFBJ* DDLLGNJHEGG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NGLNBJDFDKO; // 0x40
	::FGCOIBFFCHB* OFNEIIFNGOE; // 0x48
	::UnityEngine::GameObject* PHEOKOOPCCM; // 0x50
	::UnityEngine::GameObject* CGMHHDKJNCN; // 0x58
	::GCIMMDDIFBJ* GGCMPOBAFCH; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* GAOLBFJFHMP; // 0x68
	::UnityEngine::GameObject* AMLPMEAFCCD; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIIMIMCBGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHIIMIMCBGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHIIMIMCBGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIIMIMCBGG_KGEBDLGBGNM_OFFSET))(this);
	}
};
