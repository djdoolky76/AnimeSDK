#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OIPCMPGPOFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A653C0)
#define OIPCMPGPOFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A652C0)
#define OIPCMPGPOFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A650B0)
#define OIPCMPGPOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13A653B0)

inline static constexpr unsigned int OIPCMPGPOFN_TypeDefinitionIndex = 92342;

class OIPCMPGPOFN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPCMPGPOFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIPCMPGPOFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPCMPGPOFN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIPCMPGPOFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
