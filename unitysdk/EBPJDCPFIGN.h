#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBPJDCPFIGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132B01F0)
#define EBPJDCPFIGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132B00F0)
#define EBPJDCPFIGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132AFE40)
#define EBPJDCPFIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x132B01E0)

inline static constexpr unsigned int EBPJDCPFIGN_TypeDefinitionIndex = 60089;

class EBPJDCPFIGN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JLLJGJAFNPA; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CJMJAJLPIKO; // 0x28
	::FGCOIBFFCHB* OJBHENOLDBE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KLMAKNGPINM; // 0x38
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x40
	::UnityEngine::GameObject* LBAPCNNGOIJ; // 0x48
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x50
	::FGCOIBFFCHB* MGFGOIABEBM; // 0x58
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x60
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x68
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPJDCPFIGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBPJDCPFIGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBPJDCPFIGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPJDCPFIGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
