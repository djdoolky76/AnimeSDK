#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class VolumetricLightBeam_ExportData; }

#define SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF485150)
#define SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xF485140)

namespace ScenenLightManager
{
	inline static constexpr unsigned int VolumetricLightBeam_SceneLightExportData_TypeDefinitionIndex = 50130;

	class VolumetricLightBeam_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::VolumetricLightBeam_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
