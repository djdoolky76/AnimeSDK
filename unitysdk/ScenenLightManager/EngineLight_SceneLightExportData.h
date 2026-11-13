#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class EngineLight_ExportData; }

#define SCENENLIGHTMANAGER_ENGINELIGHT_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45620)
#define SCENENLIGHTMANAGER_ENGINELIGHT_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA45610)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineLight_SceneLightExportData_TypeDefinitionIndex = 50132;

	class EngineLight_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::EngineLight_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINELIGHT_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINELIGHT_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
