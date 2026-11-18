#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define LELECPHOKDK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158CFFA0)
#define LELECPHOKDK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158CFE90)
#define LELECPHOKDK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158CFA90)
#define LELECPHOKDK__CTOR_OFFSET UNITYSDK_OFFSET(0x158CFF90)

inline static constexpr unsigned int LELECPHOKDK_TypeDefinitionIndex = 51295;

class LELECPHOKDK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x18
	::UnityEngine::UI::Text* KFMCLODMMKD; // 0x20
	::LGINJIKKBJA* DBGOKJNAIDH; // 0x28
	::UnityEngine::UI::Text* LEEJEBIJDPL; // 0x30
	::UnityEngine::UI::Text* KBGIAIHCEPL; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::MonoUITableScrollV2* DMEECNMBLNF; // 0x48
	::UnityEngine::UI::Text* DFDEFBKEIKI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELECPHOKDK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LELECPHOKDK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELECPHOKDK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LELECPHOKDK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
