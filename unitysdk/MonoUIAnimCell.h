#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MONOUIANIMCELL_APPLYDRIVENTRANSFORMPROPERTIES_OFFSET UNITYSDK_OFFSET(0xEB3C080)
#define MONOUIANIMCELL_CLEARDRIVENTRANSFORMPROPERTIES_OFFSET UNITYSDK_OFFSET(0xEB3C030)
#define MONOUIANIMCELL_GET_K_OFFSET UNITYSDK_OFFSET(0xEB3BEE0)
#define MONOUIANIMCELL_ONCHANGEINNER_OFFSET UNITYSDK_OFFSET(0xEB3C1C0)
#define MONOUIANIMCELL_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xEB3BF00)
#define MONOUIANIMCELL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEB3BD40)
#define MONOUIANIMCELL_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xEB3BE70)
#define MONOUIANIMCELL_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0xEB3BE30)
#define MONOUIANIMCELL_ONRESETINNER_OFFSET UNITYSDK_OFFSET(0xEB3C7F0)
#define MONOUIANIMCELL_ONRESET_OFFSET UNITYSDK_OFFSET(0xEB3C760)
#define MONOUIANIMCELL_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xEB3C700)
#define MONOUIANIMCELL_SET_K_OFFSET UNITYSDK_OFFSET(0xEB3BEF0)
#define MONOUIANIMCELL__CTOR_OFFSET UNITYSDK_OFFSET(0xEB3CB70)

inline static constexpr unsigned int MonoUIAnimCell_TypeDefinitionIndex = 44135;

class MonoUIAnimCell : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single Scale; // 0x18
	::System::Single Alpha; // 0x1C
	::UnityEngine::RectTransform* ScaleRoot; // 0x20
	::UnityEngine::CanvasGroup* AlphaRoot; // 0x28
	::System::Single _K_k__BackingField; // 0x30
	::UnityEngine::DrivenRectTransformTracker m_Tracker; // 0x34
	::System::Byte _padding0[0x3];
	::UnityEngine::DrivenTransformProperties _drivenTransformProperties; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Single get_K()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_GET_K_OFFSET))(this);
	}

	::System::Void set_K(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_SET_K_OFFSET))(this, value);
	}

	::System::Void OnChange(::System::Single ky1, ::System::Single ky2, ::System::Single kx1, ::System::Single kx2, ::System::Boolean verticalLayout)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONCHANGE_OFFSET))(this, ky1, ky2, kx1, kx2, verticalLayout);
	}

	::System::Void OnChangeInner(::System::Single ky1, ::System::Single ky2, ::System::Single kx1, ::System::Single kx2, ::System::Boolean verticalLayout)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONCHANGEINNER_OFFSET))(this, ky1, ky2, kx1, kx2, verticalLayout);
	}

	::System::Void PreUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_PREUPDATE_OFFSET))(this);
	}

	::System::Void OnReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONRESET_OFFSET))(this);
	}

	::System::Void OnResetInner()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONRESETINNER_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void ClearDrivenTransformProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_CLEARDRIVENTRANSFORMPROPERTIES_OFFSET))(this);
	}

	::System::Void ApplyDrivenTransformProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMCELL_APPLYDRIVENTRANSFORMPROPERTIES_OFFSET))(this);
	}
};
