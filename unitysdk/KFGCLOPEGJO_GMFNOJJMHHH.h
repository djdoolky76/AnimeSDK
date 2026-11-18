#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_GMFNOJJMHHH_GNKEFPADCFN_OFFSET UNITYSDK_OFFSET(0x1A2C59C0)
#define KFGCLOPEGJO_GMFNOJJMHHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C59B0)

inline static constexpr unsigned int KFGCLOPEGJO_GMFNOJJMHHH_TypeDefinitionIndex = 78919;

class KFGCLOPEGJO_GMFNOJJMHHH : public ::System::Object
{
public:
	::System::Boolean OOPENGKHMBA; // 0x10
	::System::Boolean FMELDMHAHEF; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_GMFNOJJMHHH__CTOR_OFFSET))(this);
	}

	::System::Void GNKEFPADCFN(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_GMFNOJJMHHH_GNKEFPADCFN_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
