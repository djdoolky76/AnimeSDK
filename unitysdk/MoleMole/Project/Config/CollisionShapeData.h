#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OALMPBPCPPK.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PROJECT_CONFIG_COLLISIONSHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E19100)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int CollisionShapeData_TypeDefinitionIndex = 12014;

	class CollisionShapeData : public ::System::Object
	{
	public:
		::OALMPBPCPPK type; // 0x10
		::System::Single width; // 0x14
		::System::Single height; // 0x18
		::System::Single radius; // 0x1C
		::System::Single offsetX; // 0x20
		::System::Single offsetY; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_COLLISIONSHAPEDATA__CTOR_OFFSET))(this);
		}
	};
}
