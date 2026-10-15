#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_ACIFLJGLEMB_OFFSET UNITYSDK_OFFSET(0xD5EE420)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xD5EE580)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_KJJEOKLDJNA_OFFSET UNITYSDK_OFFSET(0xD5EE4D0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftBinderBase_ComponentEntry : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::UnityEngine::GameObject* _Node; // 0x18
		::UnityEngine::Component* Cmpt; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>* ACIFLJGLEMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_ACIFLJGLEMB_OFFSET))(this);
		}

		::System::Void KJJEOKLDJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY_KJJEOKLDJNA_OFFSET))(this);
		}

	};
}
