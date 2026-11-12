#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCENENLIGHTMANAGER_BASECOMPONENTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF47F9B0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BaseComponentExportData_TypeDefinitionIndex = 50218;

	class BaseComponentExportData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BASECOMPONENTEXPORTDATA_CTOR_OFFSET))(this);
		}

	};
}
