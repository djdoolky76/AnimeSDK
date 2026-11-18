#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MoleMole::Config { class Map3DVisualConfigItem; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM_GET_EDITBOUNDS_OFFSET UNITYSDK_OFFSET(0x164297C0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM_SET_EDITBOUNDS_OFFSET UNITYSDK_OFFSET(0x164297E0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x164297F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_GroupStateControlItem_TypeDefinitionIndex = 45121;

	class NewMonoSceneMap3DConfig_GroupStateControlItem : public ::System::Object
	{
	public:
		::System::Int32 GroupId; // 0x10
		::System::Int32 MemberId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 StateValue; // 0x20
		::System::Int32 LayerIndex; // 0x24
		::System::Boolean ControlBounds; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Bounds Bounds; // 0x2C
		::System::Boolean ControlBottom; // 0x44
		::System::Byte _padding1[0x3];
		::MoleMole::Config::Map3DVisualConfigItem* BottomVisualConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_EditBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM_GET_EDITBOUNDS_OFFSET))(this);
		}

		::System::Void set_EditBounds(::UnityEngine::Bounds EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLITEM_SET_EDITBOUNDS_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
