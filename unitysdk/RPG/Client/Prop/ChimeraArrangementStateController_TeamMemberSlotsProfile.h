#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_TEAMMEMBERSLOTSPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC4D380)

namespace RPG::Client::Prop
{
	class ChimeraArrangementStateController_TeamMemberSlotsProfile : public ::System::Object
	{
	public:
		::UnityEngine::Transform* SlotsParent; // 0x10
		::UnityEngine::GameObject* PropsRoot; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSTATECONTROLLER_TEAMMEMBERSLOTSPROFILE_CTOR_OFFSET))(this);
		}

	};
}
