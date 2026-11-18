#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_DROPPERFORMREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3E1A0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_DropPerformRequest_TypeDefinitionIndex = 76201;

	class VOPerformSubSystem_DropPerformRequest : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle CachedEntity; // 0x10
		::UnityEngine::AnimationCurve* RhythmCurve; // 0x20
		::Foundation::ViewObject::GroupMemberIdentifier Identifier; // 0x28
		::System::Single TotalDuration; // 0x30
		::System::Boolean EntityResolved; // 0x34
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Target; // 0x38
		::UnityEngine::Vector3 Origin; // 0x44
		::System::Single LaunchHeight; // 0x50
		::System::Single ElapsedTime; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DROPPERFORMREQUEST__CTOR_OFFSET))(this);
		}
	};
}
