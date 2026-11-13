#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LocalFogSphereInstance_ExportData; }

#define SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2E630)
#define SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1AC2E620)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalFogSphereInstance_SceneLightExportData_TypeDefinitionIndex = 50135;

	class LocalFogSphereInstance_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LocalFogSphereInstance_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
