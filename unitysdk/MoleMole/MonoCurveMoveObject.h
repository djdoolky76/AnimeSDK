#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class String; }

#define MOLEMOLE_MONOCURVEMOVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11936120)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCurveMoveObject_TypeDefinitionIndex = 84861;

	class MonoCurveMoveObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 sceneObjectID; // 0x38
		::System::Byte _padding0[0x4];
		::MoleMole::Battle::CurveMoveComponent_Config* config; // 0x40
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig* triggerConfigV2; // 0x48
		::System::Boolean forceSetMassCenter; // 0x50
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 massCenterValue; // 0x54
		::Il2CppArray<::System::String*>* autoAttachMarkNodes; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
