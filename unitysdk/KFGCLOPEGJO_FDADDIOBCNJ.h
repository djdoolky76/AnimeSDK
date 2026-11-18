#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_FDADDIOBCNJ_PBFDHPBEJFA_OFFSET UNITYSDK_OFFSET(0x167FBA00)
#define KFGCLOPEGJO_FDADDIOBCNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x167FB9F0)

inline static constexpr unsigned int KFGCLOPEGJO_FDADDIOBCNJ_TypeDefinitionIndex = 78914;

class KFGCLOPEGJO_FDADDIOBCNJ : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FDADDIOBCNJ__CTOR_OFFSET))(this);
	}

	::System::Void PBFDHPBEJFA(::UnityEngine::UI::Extension::UITimeWidget* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FDADDIOBCNJ_PBFDHPBEJFA_OFFSET))(this, PIIPCLCCOIG);
	}
};
