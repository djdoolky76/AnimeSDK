#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIDailyQuestParam;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;

#define EJBMPGBEPAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158B2F70)
#define EJBMPGBEPAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158B2EA0)
#define EJBMPGBEPAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158B2C90)
#define EJBMPGBEPAF__CTOR_OFFSET UNITYSDK_OFFSET(0x158B2F60)

inline static constexpr unsigned int EJBMPGBEPAF_TypeDefinitionIndex = 88386;

class EJBMPGBEPAF : public ::GIBMJLOJLKD
{
public:
	::MonoUIDailyQuestParam* AHECJBACEDB; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* MJMGANKGIFM; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* AMCNGHEBDCA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NECCIINALLK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JKGFOHJPONN; // 0x48
	::UnityEngine::RectTransform* FJENMOOLGKG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBMPGBEPAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJBMPGBEPAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBMPGBEPAF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJBMPGBEPAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
