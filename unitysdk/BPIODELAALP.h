#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define BPIODELAALP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150A9F60)
#define BPIODELAALP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150A9E60)
#define BPIODELAALP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150A9BE0)
#define BPIODELAALP__CTOR_OFFSET UNITYSDK_OFFSET(0x150A9F50)

inline static constexpr unsigned int BPIODELAALP_TypeDefinitionIndex = 73215;

class BPIODELAALP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JFNCJHAGLLI; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* EJHNNMBHAPK; // 0x20
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x28
	::MoleMole::MonoInputKey* KHDBFHNFKIF; // 0x30
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* JNADFFOLDGP; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* AGAHMBFHHHN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* PKKOPFJCBII; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIODELAALP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIODELAALP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIODELAALP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIODELAALP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
