#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define GGGANHLGFPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11DA9510)
#define GGGANHLGFPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11DA9460)
#define GGGANHLGFPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11DA92C0)
#define GGGANHLGFPM__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA9500)

inline static constexpr unsigned int GGGANHLGFPM_TypeDefinitionIndex = 91292;

class GGGANHLGFPM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* OIGMLNIKNAC; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGANHLGFPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGGANHLGFPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGANHLGFPM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGGANHLGFPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
