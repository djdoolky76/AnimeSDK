#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class EngineReflectionProbe_ExportData; }

#define SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE963DC0)
#define SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xE963DB0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineReflectionProbe_SceneLightExportData_TypeDefinitionIndex = 49057;

	class EngineReflectionProbe_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::EngineReflectionProbe_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
