#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define OLDEDADMJBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129457A0)
#define OLDEDADMJBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129456F0)
#define OLDEDADMJBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12945540)
#define OLDEDADMJBL__CTOR_OFFSET UNITYSDK_OFFSET(0x12945790)

inline static constexpr unsigned int OLDEDADMJBL_TypeDefinitionIndex = 63681;

class OLDEDADMJBL : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* AMLGJLFOLKE; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* FAGMEMGEGFP; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDEDADMJBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLDEDADMJBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDEDADMJBL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLDEDADMJBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
