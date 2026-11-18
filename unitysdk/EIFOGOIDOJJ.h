#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define EIFOGOIDOJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154B48A0)
#define EIFOGOIDOJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154B4780)
#define EIFOGOIDOJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154B4560)
#define EIFOGOIDOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x154B4890)

inline static constexpr unsigned int EIFOGOIDOJJ_TypeDefinitionIndex = 80677;

class EIFOGOIDOJJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x18
	::FGCOIBFFCHB* FMHNOKBIENC; // 0x20
	::UnityEngine::Transform* PNEJILEEAML; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x40
	::UnityEngine::Transform* LFBCOLJKGGI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFOGOIDOJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIFOGOIDOJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFOGOIDOJJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIFOGOIDOJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
