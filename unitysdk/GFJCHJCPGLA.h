#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GFJCHJCPGLA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CA5300)
#define GFJCHJCPGLA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CA5270)
#define GFJCHJCPGLA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CA50D0)
#define GFJCHJCPGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA52F0)

inline static constexpr unsigned int GFJCHJCPGLA_TypeDefinitionIndex = 67168;

class GFJCHJCPGLA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FOGGNBIPAFD; // 0x18
	::MoleMole::UIGeneralButtonController* JIBEIJJHKCE; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PBJAGOIPJJK; // 0x30
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJCHJCPGLA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFJCHJCPGLA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFJCHJCPGLA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJCHJCPGLA_KGEBDLGBGNM_OFFSET))(this);
	}
};
