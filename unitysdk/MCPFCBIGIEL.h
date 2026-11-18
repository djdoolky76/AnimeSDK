#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define MCPFCBIGIEL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F34C30)
#define MCPFCBIGIEL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F34B40)
#define MCPFCBIGIEL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F349D0)
#define MCPFCBIGIEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11F34C20)

inline static constexpr unsigned int MCPFCBIGIEL_TypeDefinitionIndex = 82732;

class MCPFCBIGIEL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPFCBIGIEL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPFCBIGIEL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCPFCBIGIEL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPFCBIGIEL_KGEBDLGBGNM_OFFSET))(this);
	}
};
