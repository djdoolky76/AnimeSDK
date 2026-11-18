#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovPrepareRoleWidgetController_Context; }

#define DFBNOPGCFIG_POPAJJFFBBD_DNKKALPHKPL_OFFSET UNITYSDK_OFFSET(0x13291620)
#define DFBNOPGCFIG_POPAJJFFBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x13291610)

inline static constexpr unsigned int DFBNOPGCFIG_POPAJJFFBBD_TypeDefinitionIndex = 71150;

class DFBNOPGCFIG_POPAJJFFBBD : public ::System::Object
{
public:
	::MoleMole::UIZenkovPrepareRoleWidgetController_Context* HBMGHPEPBNC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBNOPGCFIG_POPAJJFFBBD__CTOR_OFFSET))(this);
	}

	::System::Void DNKKALPHKPL(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFBNOPGCFIG_POPAJJFFBBD_DNKKALPHKPL_OFFSET))(this, PIIPCLCCOIG);
	}
};
