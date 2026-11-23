#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Transform; }

#define ABC_SPRINGBONE_SPRINGMANAGER_SPRINGBONECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA0D0)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int SpringManager_SpringBoneClass_TypeDefinitionIndex = 8086;

	class SpringManager_SpringBoneClass : public ::System::Object
	{
	public:
		::UnityEngine::FAED0374422E783A* dynamicRatioCurve; // 0x10
		::System::Single dynamicRatio; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::FAED0374422E783A* stiffnessCurve; // 0x20
		::System::Single stiffnessForce; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::FAED0374422E783A* dragCurve; // 0x30
		::System::Single dragForce; // 0x38
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Transform*>* rootArray; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_SPRINGBONECLASS__CTOR_OFFSET))(this);
		}
	};
}
