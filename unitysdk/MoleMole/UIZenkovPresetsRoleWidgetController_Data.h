#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LCHGIJJLKGH;
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4ABE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRoleWidgetController_Data_TypeDefinitionIndex = 42732;

	class UIZenkovPresetsRoleWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_1<::UnityEngine::RectTransform*>* GetOverrideTransformFunc; // 0x10
		::LCHGIJJLKGH* EquipItem; // 0x18
		::System::UInt32 AvatarId; // 0x20
		::System::Int32 SlotIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
