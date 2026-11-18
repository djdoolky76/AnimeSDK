#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define IDKJLJNFGJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEA17C30)
#define IDKJLJNFGJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEA17BA0)
#define IDKJLJNFGJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEA17A50)
#define IDKJLJNFGJA__CTOR_OFFSET UNITYSDK_OFFSET(0xEA17C20)

inline static constexpr unsigned int IDKJLJNFGJA_TypeDefinitionIndex = 43762;

class IDKJLJNFGJA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKJLJNFGJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDKJLJNFGJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDKJLJNFGJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKJLJNFGJA_KGEBDLGBGNM_OFFSET))(this);
	}
};
