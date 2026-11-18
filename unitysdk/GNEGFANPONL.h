#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define GNEGFANPONL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17ADA3B0)
#define GNEGFANPONL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17ADA2E0)
#define GNEGFANPONL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17ADA120)
#define GNEGFANPONL__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADA3A0)

inline static constexpr unsigned int GNEGFANPONL_TypeDefinitionIndex = 82269;

class GNEGFANPONL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KIMKLBMFHCE; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* IAGLEGAOLIH; // 0x30
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x38
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEGFANPONL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNEGFANPONL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNEGFANPONL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEGFANPONL_KGEBDLGBGNM_OFFSET))(this);
	}
};
