#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_FHFCMJNIAJB_PBFDHPBEJFA_OFFSET UNITYSDK_OFFSET(0x14FD5900)
#define KFGCLOPEGJO_FHFCMJNIAJB__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD58F0)

inline static constexpr unsigned int KFGCLOPEGJO_FHFCMJNIAJB_TypeDefinitionIndex = 78940;

class KFGCLOPEGJO_FHFCMJNIAJB : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FHFCMJNIAJB__CTOR_OFFSET))(this);
	}

	::System::Void PBFDHPBEJFA(::UnityEngine::UI::Extension::UITimeWidget* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_FHFCMJNIAJB_PBFDHPBEJFA_OFFSET))(this, PIIPCLCCOIG);
	}
};
