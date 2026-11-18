#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JPOJBLHBFPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C374BE0)
#define JPOJBLHBFPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C374B00)
#define JPOJBLHBFPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C374BD0)

inline static constexpr unsigned int JPOJBLHBFPK_TypeDefinitionIndex = 39443;

class JPOJBLHBFPK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::MoleMole::MonoGamepadScrollView* JODKLLLCLCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOJBLHBFPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPOJBLHBFPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPOJBLHBFPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
