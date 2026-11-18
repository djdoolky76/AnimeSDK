#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class JEEIODNDJFJ_CDAFGKLGBDM;
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define JEEIODNDJFJ_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x198A2A70)
#define JEEIODNDJFJ_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x198A2A60)
#define JEEIODNDJFJ_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x198A2BB0)
#define JEEIODNDJFJ_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x198A2B30)
#define JEEIODNDJFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x198A2BA0)

inline static constexpr unsigned int JEEIODNDJFJ_TypeDefinitionIndex = 45731;

class JEEIODNDJFJ : public ::DDHEGIHEKLH
{
public:
	::JEEIODNDJFJ_CDAFGKLGBDM* OBGBFHGKILC; // 0x28
	::MoleMole::UIGeneralConsoleBtnWidgetController* OGBINPGAFCL; // 0x30
	::MoleMole::UIGeneralConsoleBtnWidgetController* KPNMONCGEMD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_MBDFANLLCHK_OFFSET))(this);
	}
};
