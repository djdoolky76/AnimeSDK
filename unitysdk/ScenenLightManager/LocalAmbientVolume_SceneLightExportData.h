#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_ExportData; }

#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE965EE0)
#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xE965ED0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalAmbientVolume_SceneLightExportData_TypeDefinitionIndex = 49053;

	class LocalAmbientVolume_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LocalAmbientVolume_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
