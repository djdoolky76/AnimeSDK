#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define KFGCLOPEGJO_IKFAEDINCOP_OGBBFJPPIKA_OFFSET UNITYSDK_OFFSET(0x167FBA60)
#define KFGCLOPEGJO_IKFAEDINCOP__CTOR_OFFSET UNITYSDK_OFFSET(0x167FBA50)

inline static constexpr unsigned int KFGCLOPEGJO_IKFAEDINCOP_TypeDefinitionIndex = 78964;

class KFGCLOPEGJO_IKFAEDINCOP : public ::System::Object
{
public:
	::System::Boolean MOOOBJOKLOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_IKFAEDINCOP__CTOR_OFFSET))(this);
	}

	::System::Void OGBBFJPPIKA(::UnityEngine::UI::Extension::UIDynamicNumberLabel* GBELIHABEDH, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_IKFAEDINCOP_OGBBFJPPIKA_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
