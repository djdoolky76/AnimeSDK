#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MBHHKIBBAMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C70B70)
#define MBHHKIBBAMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C70A60)
#define MBHHKIBBAMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C70840)
#define MBHHKIBBAMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C70B60)

inline static constexpr unsigned int MBHHKIBBAMD_TypeDefinitionIndex = 78471;

class MBHHKIBBAMD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x20
	::UnityEngine::UI::Text* CKHKPHBKAOJ; // 0x28
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x30
	::FGCOIBFFCHB* LEPFMCKLENI; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::LGINJIKKBJA* HGBKOAPGIHA; // 0x48
	::UnityEngine::GameObject* PINBDBPJOML; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHHKIBBAMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBHHKIBBAMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBHHKIBBAMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHHKIBBAMD_KGEBDLGBGNM_OFFSET))(this);
	}
};
