#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DFDNICLPGCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147C8A50)
#define DFDNICLPGCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x147C88F0)
#define DFDNICLPGCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x147C8680)
#define DFDNICLPGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x147C8A40)

inline static constexpr unsigned int DFDNICLPGCK_TypeDefinitionIndex = 40918;

class DFDNICLPGCK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LKJIIHJNGKC; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIOverlordFeastLevelWidgetController*>* AIEBDNDHGNI; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ABJEMIGAJOE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OMFILKHEOLE; // 0x38
	::FGCOIBFFCHB* GMDAJPJHDLG; // 0x40
	::MonoUITableScrollV2* EAJEODOEKLP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* PAFHHKAGDMB; // 0x50
	::LGINJIKKBJA* LBKENEEMGFP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDNICLPGCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFDNICLPGCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDNICLPGCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFDNICLPGCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
