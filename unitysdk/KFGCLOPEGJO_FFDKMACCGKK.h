#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_FFDKMACCGKK_GNKEFPADCFN_OFFSET UNITYSDK_OFFSET(0x15B87950)
#define KFGCLOPEGJO_FFDKMACCGKK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B87940)

inline static constexpr unsigned int KFGCLOPEGJO_FFDKMACCGKK_TypeDefinitionIndex = 78938;

class KFGCLOPEGJO_FFDKMACCGKK : public ::System::Object
{
public:
	::System::Boolean OOPENGKHMBA; // 0x10
	::System::Boolean FMELDMHAHEF; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FFDKMACCGKK__CTOR_OFFSET))(this);
	}

	::System::Void GNKEFPADCFN(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::DateTime EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::DateTime))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FFDKMACCGKK_GNKEFPADCFN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
