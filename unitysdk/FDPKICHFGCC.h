#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FDPKICHFGCC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13204E10)
#define FDPKICHFGCC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13204CB0)
#define FDPKICHFGCC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13204A40)
#define FDPKICHFGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x13204E00)

inline static constexpr unsigned int FDPKICHFGCC_TypeDefinitionIndex = 82199;

class FDPKICHFGCC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::LGINJIKKBJA* PGGNLOBOEMO; // 0x20
	::LGINJIKKBJA* EAELLKJMPBM; // 0x28
	::UnityEngine::Transform* PDACHPLBKIE; // 0x30
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x38
	::UnityEngine::CanvasGroup* HGMNLNMGBBG; // 0x40
	::LGINJIKKBJA* JKNEIDEDNIN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HFJGFOLKIMA; // 0x50
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CIODPKMJMGE; // 0x60
	::LGINJIKKBJA* AFPDIIONBKA; // 0x68
	::MonoUITableScrollV2* PLINCOBCGIP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPKICHFGCC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDPKICHFGCC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPKICHFGCC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDPKICHFGCC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
