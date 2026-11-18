#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NDPIBFNKFCB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105AF470)
#define NDPIBFNKFCB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105AF3C0)
#define NDPIBFNKFCB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105AF210)
#define NDPIBFNKFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x105AF460)

inline static constexpr unsigned int NDPIBFNKFCB_TypeDefinitionIndex = 71025;

class NDPIBFNKFCB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KOCMNCCAJKD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IFAEDDINJCH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPIBFNKFCB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDPIBFNKFCB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPIBFNKFCB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDPIBFNKFCB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
