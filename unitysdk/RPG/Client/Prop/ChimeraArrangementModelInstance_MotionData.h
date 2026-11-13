#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFDB350)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementModelInstance_MotionData_TypeDefinitionIndex = 81197;

	class ChimeraArrangementModelInstance_MotionData : public ::System::Object
	{
	public:
		::System::Action* OnFinish; // 0x10
		::UnityEngine::Quaternion SourceQuaternion; // 0x18
		::System::Single Time; // 0x28
		::UnityEngine::Quaternion TargetQuaternion; // 0x2C
		::System::Boolean IsActive; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 TargetPosition; // 0x40
		::UnityEngine::Vector3 SourcePosition; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTMODELINSTANCE_MOTIONDATA_CTOR_OFFSET))(this);
		}

	};
}
