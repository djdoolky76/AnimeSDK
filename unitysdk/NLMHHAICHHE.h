#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NLMHHAICHHE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AE28B60)
#define NLMHHAICHHE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AE28A90)
#define NLMHHAICHHE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AE288B0)
#define NLMHHAICHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE28B50)

inline static constexpr unsigned int NLMHHAICHHE_TypeDefinitionIndex = 68073;

class NLMHHAICHHE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* NMGGGEJPBOC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IDJIGNEJCEM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x28
	::UnityEngine::GameObject* IPAJICIFKAC; // 0x30
	::UnityEngine::GameObject* CAIJPKCCJJO; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IHHOBLNNHAC; // 0x40
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x48
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMHHAICHHE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLMHHAICHHE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLMHHAICHHE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMHHAICHHE_KGEBDLGBGNM_OFFSET))(this);
	}
};
