#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_DEVICEPHYSICALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06B770)

namespace MoleMole
{
	inline static constexpr unsigned int DevicePhysicalData_TypeDefinitionIndex = 92654;

	class DevicePhysicalData : public ::System::Object
	{
	public:
		::System::Single TopEdge; // 0x10
		::System::Single BottomEdge; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICEPHYSICALDATA__CTOR_OFFSET))(this);
		}
	};
}
