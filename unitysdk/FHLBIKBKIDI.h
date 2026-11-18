#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }

#define FHLBIKBKIDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x142967F0)
#define FHLBIKBKIDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14296740)
#define FHLBIKBKIDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x142965B0)
#define FHLBIKBKIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x142967E0)

inline static constexpr unsigned int FHLBIKBKIDI_TypeDefinitionIndex = 78050;

class FHLBIKBKIDI : public ::GIBMJLOJLKD
{
public:
	::ShaderAniHelp* OFLOPECOMNJ; // 0x18
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x20
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x28
	::ShaderAniHelp* NDOOCOJFKAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIKBKIDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHLBIKBKIDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLBIKBKIDI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHLBIKBKIDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
