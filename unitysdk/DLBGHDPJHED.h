#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DLBGHDPJHED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12BB59E0)
#define DLBGHDPJHED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12BB5930)
#define DLBGHDPJHED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12BB5760)
#define DLBGHDPJHED__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB59D0)

inline static constexpr unsigned int DLBGHDPJHED_TypeDefinitionIndex = 76654;

class DLBGHDPJHED : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBGHDPJHED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBGHDPJHED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBGHDPJHED_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBGHDPJHED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
