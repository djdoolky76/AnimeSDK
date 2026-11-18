#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CGOIBNCKCCJ;
class JFBNBOHNJBF;
class MGBPBGBHKFB;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x131140F0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13114090)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_ISFINITEQUATERNION_OFFSET UNITYSDK_OFFSET(0x13114CD0)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_PROCESS_1_OFFSET UNITYSDK_OFFSET(0x13114E50)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_PROCESS_OFFSET UNITYSDK_OFFSET(0x13114D90)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_RESTOREAPPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x13114140)
#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13114080)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballTargetPresentationMotionMode_TypeDefinitionIndex = 56765;

	class PinballSubsystem_PinballTargetPresentationMotionMode : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* _entity; // 0x10
		::CGOIBNCKCCJ* _runtime; // 0x18
		::UnityEngine::Quaternion _lastAppliedDelta; // 0x20

		::System::Void _ctor(::CGOIBNCKCCJ* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::CGOIBNCKCCJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE__CTOR_OFFSET))(this, runtime);
		}

		::System::Void Initialize(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_INITIALIZE_OFFSET))(this, entity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_DISPOSE_OFFSET))(this);
		}

		::System::Void RestoreAppliedRotation(::JFBNBOHNJBF* finalMove, ::UnityEngine::Transform* modelTransform)
		{
			return ((::System::Void(*)(::PVOID, ::JFBNBOHNJBF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_RESTOREAPPLIEDROTATION_OFFSET))(this, finalMove, modelTransform);
		}

		::UnityEngine::Vector3 Process(::MGBPBGBHKFB* input, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MGBPBGBHKFB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_PROCESS_OFFSET))(this, input, position, rotation);
		}

		::UnityEngine::Quaternion Process_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_PROCESS_1_OFFSET))(this, position, rotation);
		}

		static ::System::Boolean IsFiniteQuaternion(::UnityEngine::Quaternion value)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLTARGETPRESENTATIONMOTIONMODE_ISFINITEQUATERNION_OFFSET))(value);
		}
	};
}
