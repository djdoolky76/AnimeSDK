#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define MCENBLGAPLH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DDA450)
#define MCENBLGAPLH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DDA340)
#define MCENBLGAPLH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DDA190)
#define MCENBLGAPLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDA440)

inline static constexpr unsigned int MCENBLGAPLH_TypeDefinitionIndex = 58892;

class MCENBLGAPLH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PFNAFELKHHP; // 0x18
	::MonoUITableScrollV2* HALLMHJEAOA; // 0x20
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x28
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x30
	::LGINJIKKBJA* BOGHCBIHHBF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCENBLGAPLH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCENBLGAPLH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCENBLGAPLH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCENBLGAPLH_KGEBDLGBGNM_OFFSET))(this);
	}
};
