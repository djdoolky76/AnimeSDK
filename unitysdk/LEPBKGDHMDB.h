#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define LEPBKGDHMDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F07110)
#define LEPBKGDHMDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F07010)
#define LEPBKGDHMDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BD6890)
#define LEPBKGDHMDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD6B10)

inline static constexpr unsigned int LEPBKGDHMDB_TypeDefinitionIndex = 40725;

class LEPBKGDHMDB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* DBOCLHHKEJG; // 0x18
	::LGINJIKKBJA* EEBGPEHGBEF; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::RectTransform* HGEBIMKDLGB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x38
	::UnityEngine::Transform* ODALDIOFMPH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* KNNHAJOKMEE; // 0x50
	::UnityEngine::RectTransform* GCCNEMDHLCE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ICPFKGNKHEF; // 0x60
	::UnityEngine::Animation* JIAOCDBNEID; // 0x68
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPBKGDHMDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEPBKGDHMDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPBKGDHMDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEPBKGDHMDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
