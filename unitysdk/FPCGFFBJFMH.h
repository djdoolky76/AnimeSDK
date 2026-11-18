#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define FPCGFFBJFMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x125B92F0)
#define FPCGFFBJFMH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x125B9260)
#define FPCGFFBJFMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x125B90E0)
#define FPCGFFBJFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x125B92E0)

inline static constexpr unsigned int FPCGFFBJFMH_TypeDefinitionIndex = 66780;

class FPCGFFBJFMH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HBPKENOFMAC; // 0x18
	::UnityEngine::RectTransform* CGICCOBHACH; // 0x20
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCGFFBJFMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCGFFBJFMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPCGFFBJFMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCGFFBJFMH_KGEBDLGBGNM_OFFSET))(this);
	}
};
