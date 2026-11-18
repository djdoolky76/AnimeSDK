#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GFMKEIKOAFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149C1430)
#define GFMKEIKOAFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149C1350)
#define GFMKEIKOAFF__CTOR_OFFSET UNITYSDK_OFFSET(0x149C1420)

inline static constexpr unsigned int GFMKEIKOAFF_TypeDefinitionIndex = 67300;

class GFMKEIKOAFF : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadSpaceList* BPBEAGEOKEL; // 0x18
	::MonoUITableScrollV2* IKPHBFHGDCK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JIFKGGPHELH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMKEIKOAFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFMKEIKOAFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFMKEIKOAFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
