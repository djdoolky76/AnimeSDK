#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovZeroMarketRowItemWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define FLPFNIGHKPG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1750ABD0)
#define FLPFNIGHKPG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1750AB40)
#define FLPFNIGHKPG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1750A9A0)
#define FLPFNIGHKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1750ABC0)

inline static constexpr unsigned int FLPFNIGHKPG_TypeDefinitionIndex = 38804;

class FLPFNIGHKPG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadNavigatableList* BFBGNLKPJOB; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::MoleMole::MonoGamepadCustomList* BEKDHNOBHCA; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIZenkovZeroMarketRowItemWidgetController*>* EJENAHIGMFM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPFNIGHKPG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLPFNIGHKPG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPFNIGHKPG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLPFNIGHKPG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
