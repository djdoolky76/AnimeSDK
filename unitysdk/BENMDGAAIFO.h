#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define BENMDGAAIFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17021CC0)
#define BENMDGAAIFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17021BD0)
#define BENMDGAAIFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17021A40)
#define BENMDGAAIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17021CB0)

inline static constexpr unsigned int BENMDGAAIFO_TypeDefinitionIndex = 69028;

class BENMDGAAIFO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JENLJAKBNPI; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* EHGJOEFJJOE; // 0x28
	::FGCOIBFFCHB* HMJHDCDBNHE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENMDGAAIFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BENMDGAAIFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BENMDGAAIFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENMDGAAIFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
