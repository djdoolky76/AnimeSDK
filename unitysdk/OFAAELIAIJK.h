#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo; }

#define OFAAELIAIJK_LIGKDMBAIJN_OFFSET UNITYSDK_OFFSET(0xF17EBC0)
#define OFAAELIAIJK_NOGKICFLIKJ_OFFSET UNITYSDK_OFFSET(0xF17EBB0)
#define OFAAELIAIJK__CTOR_OFFSET UNITYSDK_OFFSET(0xF17EBD0)

inline static constexpr unsigned int OFAAELIAIJK_TypeDefinitionIndex = 78881;

class OFAAELIAIJK : public ::System::Object
{
public:
	::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo* OFKBHPPPDOG; // 0x10
	::System::Boolean _JPPACNJEMAO_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAAELIAIJK__CTOR_OFFSET))(this);
	}

	::System::Boolean NOGKICFLIKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAAELIAIJK_NOGKICFLIKJ_OFFSET))(this);
	}

	::System::Void LIGKDMBAIJN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFAAELIAIJK_LIGKDMBAIJN_OFFSET))(this, EGEGIMGMJHN);
	}
};
