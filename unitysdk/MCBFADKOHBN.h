#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MCBFADKOHBN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15922C00)
#define MCBFADKOHBN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15922B70)
#define MCBFADKOHBN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15922A20)
#define MCBFADKOHBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15922BF0)

inline static constexpr unsigned int MCBFADKOHBN_TypeDefinitionIndex = 84640;

class MCBFADKOHBN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBFADKOHBN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCBFADKOHBN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCBFADKOHBN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBFADKOHBN_KGEBDLGBGNM_OFFSET))(this);
	}
};
