#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NJPANDKOIDJ_AEEIHGDOFOA;
namespace MoleMole { class UIMainCityRoulettWidgetControllerV2; }
namespace MoleMole { class UIWindowController; }

#define NJPANDKOIDJ_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x105C1EF0)
#define NJPANDKOIDJ_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x105C1EE0)
#define NJPANDKOIDJ_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x105C20F0)
#define NJPANDKOIDJ_OPICCIDHNLC_OFFSET UNITYSDK_OFFSET(0x105C2090)
#define NJPANDKOIDJ_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x105C1FB0)
#define NJPANDKOIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x105C2080)

inline static constexpr unsigned int NJPANDKOIDJ_TypeDefinitionIndex = 58746;

class NJPANDKOIDJ : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMainCityRoulettWidgetControllerV2* IECMAJPNEHO; // 0x28
	::NJPANDKOIDJ_AEEIHGDOFOA* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Boolean OPICCIDHNLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_OPICCIDHNLC_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPANDKOIDJ_MBDFANLLCHK_OFFSET))(this);
	}
};
