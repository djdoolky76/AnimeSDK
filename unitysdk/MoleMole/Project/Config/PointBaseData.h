#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKJJMCPGLMO.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PROJECT_CONFIG_POINTBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C187850)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int PointBaseData_TypeDefinitionIndex = 16833;

	class PointBaseData : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::DKJJMCPGLMO pointType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_POINTBASEDATA__CTOR_OFFSET))(this);
		}
	};
}
