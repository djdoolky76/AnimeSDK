#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define KFGCLOPEGJO_NACBLFPPIOJ_OGBBFJPPIKA_OFFSET UNITYSDK_OFFSET(0x12994230)
#define KFGCLOPEGJO_NACBLFPPIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x129891C0)

inline static constexpr unsigned int KFGCLOPEGJO_NACBLFPPIOJ_TypeDefinitionIndex = 78918;

class KFGCLOPEGJO_NACBLFPPIOJ : public ::System::Object
{
public:
	::System::Boolean MOOOBJOKLOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NACBLFPPIOJ__CTOR_OFFSET))(this);
	}

	::System::Void OGBBFJPPIKA(::UnityEngine::UI::Extension::UIDynamicNumberLabel* GBELIHABEDH, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NACBLFPPIOJ_OGBBFJPPIKA_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
