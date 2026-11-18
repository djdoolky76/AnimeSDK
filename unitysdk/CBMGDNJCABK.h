#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CBMGDNJCABK_JOAEOEBCBCC;
namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CBMGDNJCABK_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14C76AA0)
#define CBMGDNJCABK_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14C76A90)
#define CBMGDNJCABK_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x14C76C50)
#define CBMGDNJCABK_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14C76B60)
#define CBMGDNJCABK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C76C40)

inline static constexpr unsigned int CBMGDNJCABK_TypeDefinitionIndex = 64239;

class CBMGDNJCABK : public ::DDHEGIHEKLH
{
public:
	::CBMGDNJCABK_JOAEOEBCBCC* OBGBFHGKILC; // 0x28
	::MoleMole::UIMainCityMiniMenuWidgetController* FGIAAADPENK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CBMGDNJCABK_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK_MBDFANLLCHK_OFFSET))(this);
	}
};
