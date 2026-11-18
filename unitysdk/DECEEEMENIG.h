#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DECEEEMENIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1D78B0)
#define DECEEEMENIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1D77A0)
#define DECEEEMENIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1D7570)
#define DECEEEMENIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D78A0)

inline static constexpr unsigned int DECEEEMENIG_TypeDefinitionIndex = 92904;

class DECEEEMENIG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ODCFHABJNKK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IANJHPGOHOI; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::UnityEngine::RectTransform* HKEOAPODEHP; // 0x30
	::UnityEngine::GameObject* MBCNAFEOGAE; // 0x38
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x40
	::LGINJIKKBJA* JOEDMFLBPON; // 0x48
	::UnityEngine::GameObject* LDBFHDNHAEA; // 0x50
	::UnityEngine::Transform* OOENDNEIFDO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NGNCFDDCJEH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEEMENIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DECEEEMENIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DECEEEMENIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEEMENIG_KGEBDLGBGNM_OFFSET))(this);
	}
};
