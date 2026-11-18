#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EHGKMABDDCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17230BF0)
#define EHGKMABDDCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17230B40)
#define EHGKMABDDCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17230980)
#define EHGKMABDDCK__CTOR_OFFSET UNITYSDK_OFFSET(0x17230BE0)

inline static constexpr unsigned int EHGKMABDDCK_TypeDefinitionIndex = 77800;

class EHGKMABDDCK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IEOJFFPCGGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LPAMNLGOHIF; // 0x20
	::FGCOIBFFCHB* EKHGPNFMLGP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::FGCOIBFFCHB* APPIEHBBKMA; // 0x38
	::UnityEngine::RectTransform* KHOJKFHFKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGKMABDDCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGKMABDDCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGKMABDDCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGKMABDDCK_KGEBDLGBGNM_OFFSET))(this);
	}
};
