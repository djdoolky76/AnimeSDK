#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define GRIDLAYOUTELEMENT_GET_COL_OFFSET UNITYSDK_OFFSET(0x149F7000)
#define GRIDLAYOUTELEMENT_GET_ROW_OFFSET UNITYSDK_OFFSET(0x149F72A0)
#define GRIDLAYOUTELEMENT_MARKPARENTLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x149F7070)
#define GRIDLAYOUTELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x149F73D0)
#define GRIDLAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x149F7380)
#define GRIDLAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x149F7420)
#define GRIDLAYOUTELEMENT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x149F7310)
#define GRIDLAYOUTELEMENT_SET_COL_OFFSET UNITYSDK_OFFSET(0x149F7010)
#define GRIDLAYOUTELEMENT_SET_ROW_OFFSET UNITYSDK_OFFSET(0x149F72B0)
#define GRIDLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x149F7470)

inline static constexpr unsigned int GridLayoutElement_TypeDefinitionIndex = 42012;

class GridLayoutElement : public ::UnityEngine::MonoBehaviour
{
public:
	::System::UInt32 m_Col; // 0x18
	::System::UInt32 m_Row; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_col()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_GET_COL_OFFSET))(this);
	}

	::System::Void set_col(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_SET_COL_OFFSET))(this, value);
	}

	::System::UInt32 get_row()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_GET_ROW_OFFSET))(this);
	}

	::System::Void set_row(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_SET_ROW_OFFSET))(this, value);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void MarkParentLayoutDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTELEMENT_MARKPARENTLAYOUTDIRTY_OFFSET))(this);
	}
};
