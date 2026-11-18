#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HOEKGFKDLCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D3A810)
#define HOEKGFKDLCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D3A740)
#define HOEKGFKDLCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D3A5A0)
#define HOEKGFKDLCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3A800)

inline static constexpr unsigned int HOEKGFKDLCA_TypeDefinitionIndex = 69181;

class HOEKGFKDLCA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x28
	::MoleMole::UIGeneralButtonController* IIHLFNMKPPH; // 0x30
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEKGFKDLCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOEKGFKDLCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOEKGFKDLCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEKGFKDLCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
