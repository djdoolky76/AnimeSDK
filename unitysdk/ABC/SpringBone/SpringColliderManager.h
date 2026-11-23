#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::SpringBone { class SpringCollider; }

#define ABC_SPRINGBONE_SPRINGCOLLIDERMANAGER_E27508F108E89543_OFFSET UNITYSDK_OFFSET(0x224E570)
#define ABC_SPRINGBONE_SPRINGCOLLIDERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x224E5C0)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int SpringColliderManager_TypeDefinitionIndex = 6902;

	class SpringColliderManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean saveDuringPlay; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::ABC::SpringBone::SpringCollider*>* colliders; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGCOLLIDERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void E27508F108E89543()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGCOLLIDERMANAGER_E27508F108E89543_OFFSET))(this);
		}
	};
}
