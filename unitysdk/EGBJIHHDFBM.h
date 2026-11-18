#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define EGBJIHHDFBM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16994980)
#define EGBJIHHDFBM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16994890)
#define EGBJIHHDFBM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169946F0)
#define EGBJIHHDFBM__CTOR_OFFSET UNITYSDK_OFFSET(0x16994970)

inline static constexpr unsigned int EGBJIHHDFBM_TypeDefinitionIndex = 87436;

class EGBJIHHDFBM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* HGMNLNMGBBG; // 0x18
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x20
	::UnityEngine::Transform* PDACHPLBKIE; // 0x28
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBJIHHDFBM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGBJIHHDFBM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBJIHHDFBM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGBJIHHDFBM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
