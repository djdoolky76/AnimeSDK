#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EOJNJAOFNBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3B9D0)
#define EOJNJAOFNBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3B830)
#define EOJNJAOFNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3B9C0)

inline static constexpr unsigned int EOJNJAOFNBP_TypeDefinitionIndex = 59350;

class EOJNJAOFNBP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BPGIPBDNNEN; // 0x18
	::UnityEngine::RectTransform* NCKEEDAPPEJ; // 0x20
	::UnityEngine::RectTransform* NAMFNILEKJK; // 0x28
	::UnityEngine::RectTransform* FEODDAEDGIO; // 0x30
	::UnityEngine::RectTransform* ICFJGEDIMLE; // 0x38
	::UnityEngine::RectTransform* NMAAEDPAOOH; // 0x40
	::UnityEngine::RectTransform* DMGMNMENKHK; // 0x48
	::UnityEngine::RectTransform* BKOEPEEOJFK; // 0x50
	::UnityEngine::RectTransform* FCFGNBJOGNC; // 0x58
	::UnityEngine::RectTransform* AKDNBNACOKF; // 0x60
	::UnityEngine::RectTransform* NJPODFMDGPF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJNJAOFNBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJNJAOFNBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJNJAOFNBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
