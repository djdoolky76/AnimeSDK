#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeTrackVirtualCameraFollowAndAim; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KDOLHBPALAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB36BB20)
#define KDOLHBPALAA_OKNIDHAPGLH_OFFSET UNITYSDK_OFFSET(0xB36BE30)
#define KDOLHBPALAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB36BB50)

	class KDOLHBPALAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*))((::PBYTE)hIl2Cpp + KDOLHBPALAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHBPALAA_ONTASKBEGIN_OFFSET))(this);
		}

		::UnityEngine::Transform* OKNIDHAPGLH(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDOLHBPALAA_OKNIDHAPGLH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
