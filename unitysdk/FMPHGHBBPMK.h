#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FMPHGHBBPMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165B8EF0)
#define FMPHGHBBPMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165B8DB0)
#define FMPHGHBBPMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165B8BA0)
#define FMPHGHBBPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x165B8EE0)

inline static constexpr unsigned int FMPHGHBBPMK_TypeDefinitionIndex = 89047;

class FMPHGHBBPMK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x18
	::UnityEngine::Transform* LFBCOLJKGGI; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x30
	::FGCOIBFFCHB* FMHNOKBIENC; // 0x38
	::FGCOIBFFCHB* HELAMPHDBEH; // 0x40
	::UnityEngine::Transform* PNEJILEEAML; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPHGHBBPMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMPHGHBBPMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPHGHBBPMK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMPHGHBBPMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
