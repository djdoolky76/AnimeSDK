#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define DIMELDNJJKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15A49060)
#define DIMELDNJJKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15A48FD0)
#define DIMELDNJJKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15A48E30)
#define DIMELDNJJKP__CTOR_OFFSET UNITYSDK_OFFSET(0x15A49050)

inline static constexpr unsigned int DIMELDNJJKP_TypeDefinitionIndex = 59584;

class DIMELDNJJKP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UISlider* MPPJIMNMHLN; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMELDNJJKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIMELDNJJKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMELDNJJKP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIMELDNJJKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
