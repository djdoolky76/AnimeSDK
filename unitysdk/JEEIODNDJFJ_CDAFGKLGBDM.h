#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }

#define JEEIODNDJFJ_CDAFGKLGBDM_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14A5A460)
#define JEEIODNDJFJ_CDAFGKLGBDM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5A6A0)

inline static constexpr unsigned int JEEIODNDJFJ_CDAFGKLGBDM_TypeDefinitionIndex = 45732;

class JEEIODNDJFJ_CDAFGKLGBDM : public ::PIOMHDMPINF
{
public:
	::MoleMole::UIGeneralConsoleBtnWidgetController* KPNMONCGEMD; // 0x10
	::MoleMole::UIGeneralConsoleBtnWidgetController* OGBINPGAFCL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_CDAFGKLGBDM__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEIODNDJFJ_CDAFGKLGBDM_LBJEOHBBBPN_OFFSET))(this);
	}
};
