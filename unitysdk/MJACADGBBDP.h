#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MJACADGBBDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A65DBC0)
#define MJACADGBBDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A65DAD0)
#define MJACADGBBDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A65D8D0)
#define MJACADGBBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65DBB0)

inline static constexpr unsigned int MJACADGBBDP_TypeDefinitionIndex = 76869;

class MJACADGBBDP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MGLOEIDEANA; // 0x18
	::LGINJIKKBJA* FADPDMELIAC; // 0x20
	::UnityEngine::Transform* HCOBLFOBMAM; // 0x28
	::UnityEngine::Transform* IKLFBAGDELH; // 0x30
	::FGCOIBFFCHB* JFPLHFBJMAC; // 0x38
	::UnityEngine::Transform* LMOKNCNDCJK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JBPOJJGCECG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJACADGBBDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJACADGBBDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJACADGBBDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJACADGBBDP_KGEBDLGBGNM_OFFSET))(this);
	}
};
