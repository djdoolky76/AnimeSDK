#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define BLHFHJGMCBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C4E8D0)
#define BLHFHJGMCBB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14C4E800)
#define BLHFHJGMCBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C4E600)
#define BLHFHJGMCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4E8C0)

inline static constexpr unsigned int BLHFHJGMCBB_TypeDefinitionIndex = 53583;

class BLHFHJGMCBB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* HGMNLNMGBBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* GKMDDOPPNJH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHFHJGMCBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLHFHJGMCBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHFHJGMCBB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLHFHJGMCBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
