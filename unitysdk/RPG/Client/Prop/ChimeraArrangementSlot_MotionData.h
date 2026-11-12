#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_MOTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E7260)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementSlot_MotionData_TypeDefinitionIndex = 81200;

	class ChimeraArrangementSlot_MotionData : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* Config; // 0x10
		::System::Single Time; // 0x18
		::UnityEngine::Vector3 TargetPosition; // 0x1C
		::System::Boolean IsActive; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 SourcePosition; // 0x2C
		::UnityEngine::Quaternion TargetQuaternion; // 0x38
		::UnityEngine::Quaternion SourceQuaternion; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_MOTIONDATA_CTOR_OFFSET))(this);
		}

	};
}
