#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDJFBGCAEOI.h"
#include "unitysdk/MoleMole/IMonoModelShapeElement.h"
#include "unitysdk/MEAKCNLKBEJ.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1A70D880)
#define MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A70D410)
#define MOLEMOLE_MONOMODELTOWBONESCAPSULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70D890)

namespace MoleMole
{
	inline static constexpr unsigned int MonoModelTowBonesCapsule_TypeDefinitionIndex = 60629;

	class MonoModelTowBonesCapsule : public ::MoleMole::IMonoModelShapeElement
	{
	public:
		::UnityEngine::Transform* startBone; // 0x10
		::UnityEngine::Transform* endBone; // 0x18
		::System::Single startBoneOffset; // 0x20
		::System::Single endBoneOffset; // 0x24
		::System::Single radius; // 0x28
		::JDJFBGCAEOI flag; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE__CTOR_OFFSET))(this);
		}

		::MEAKCNLKBEJ get_Shape()
		{
			return ((::MEAKCNLKBEJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_SHAPE_OFFSET))(this);
		}

		::JDJFBGCAEOI get_Flag()
		{
			return ((::JDJFBGCAEOI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMODELTOWBONESCAPSULE_GET_FLAG_OFFSET))(this);
		}
	};
}
