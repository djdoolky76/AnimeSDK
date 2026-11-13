#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class EasyFog_ExportData; }

#define SCENENLIGHTMANAGER_EASYFOG_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA455E0)
#define SCENENLIGHTMANAGER_EASYFOG_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA455D0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EasyFog_SceneLightExportData_TypeDefinitionIndex = 50137;

	class EasyFog_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::EasyFog_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_EASYFOG_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_EASYFOG_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
