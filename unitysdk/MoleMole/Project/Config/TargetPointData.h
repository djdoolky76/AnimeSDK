#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDAHILBOJEC.h"
#include "unitysdk/MoleMole/Project/Config/PointBaseData.h"

namespace MoleMole::Project::Config { class CollisionShapeData; }

#define MOLEMOLE_PROJECT_CONFIG_TARGETPOINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE6110)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int TargetPointData_TypeDefinitionIndex = 9587;

	class TargetPointData : public ::MoleMole::Project::Config::PointBaseData
	{
	public:
		::System::Int32 order; // 0x20
		::System::Byte _padding0[0x4];
		::MoleMole::Project::Config::CollisionShapeData* collisionShape; // 0x28
		::HDAHILBOJEC missionStatusStatus; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_TARGETPOINTDATA__CTOR_OFFSET))(this);
		}
	};
}
