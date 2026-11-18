#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIDJDKCFICH.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_ROTATIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7155F0)

namespace MoleMole
{
	inline static constexpr unsigned int RotationPoint_TypeDefinitionIndex = 50896;

	class RotationPoint : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14
		::UnityEngine::Transform* pointTransform; // 0x18
		::GIDJDKCFICH DirectionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROTATIONPOINT__CTOR_OFFSET))(this);
		}
	};
}
