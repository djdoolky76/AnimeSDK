#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class BillboardController_ExportData; }

#define SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF47FA00)
#define SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xF47F9F0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BillboardController_SceneLightExportData_TypeDefinitionIndex = 50131;

	class BillboardController_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::BillboardController_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
