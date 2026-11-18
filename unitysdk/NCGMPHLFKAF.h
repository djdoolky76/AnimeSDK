#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define NCGMPHLFKAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105AC830)
#define NCGMPHLFKAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105AC740)
#define NCGMPHLFKAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105AC580)
#define NCGMPHLFKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x105AC820)

inline static constexpr unsigned int NCGMPHLFKAF_TypeDefinitionIndex = 73463;

class NCGMPHLFKAF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FGAKLJGIOLF; // 0x18
	::UnityEngine::Transform* PHPHEKMFOMH; // 0x20
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x28
	::UnityEngine::Transform* PBBBONCMNLA; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::UnityEngine::Transform* MAKCAHFKBEJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGMPHLFKAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCGMPHLFKAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGMPHLFKAF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCGMPHLFKAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
