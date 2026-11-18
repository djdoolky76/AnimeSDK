#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define DPNFAFMKINI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132AA520)
#define DPNFAFMKINI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132AA470)
#define DPNFAFMKINI_LKMADDJCKEG_OFFSET UNITYSDK_OFFSET(0x132AA320)
#define DPNFAFMKINI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132AA130)
#define DPNFAFMKINI__CTOR_OFFSET UNITYSDK_OFFSET(0x132AA510)

inline static constexpr unsigned int DPNFAFMKINI_TypeDefinitionIndex = 72869;

class DPNFAFMKINI : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* BLMPOCBNNNB; // 0x18
	::LGINJIKKBJA* CONAMFJJGBC; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* MMNNLOMMNGL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OPLCKBFDNHF; // 0x30
	::UnityEngine::Transform* HEFNEOMFAAH; // 0x38
	::UnityEngine::RectTransform* PECHBKFKNCA; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CMEPCFLGJDK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DOAIKOHLHGJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNFAFMKINI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPNFAFMKINI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNFAFMKINI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* LKMADDJCKEG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPNFAFMKINI_LKMADDJCKEG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPNFAFMKINI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
