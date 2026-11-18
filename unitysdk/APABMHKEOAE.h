#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define APABMHKEOAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF77D020)
#define APABMHKEOAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF77CF90)
#define APABMHKEOAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF77CDF0)
#define APABMHKEOAE__CTOR_OFFSET UNITYSDK_OFFSET(0xF77D010)

inline static constexpr unsigned int APABMHKEOAE_TypeDefinitionIndex = 76518;

class APABMHKEOAE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* FFMBBKILPED; // 0x20
	::UnityEngine::RectTransform* AOOFHEONBNH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PJIMOIIONNI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APABMHKEOAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APABMHKEOAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APABMHKEOAE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APABMHKEOAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
