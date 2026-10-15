#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LineGlow_ExportData; }

#define SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE95B7D0)
#define SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xE95B7C0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LineGlow_SceneLightExportData_TypeDefinitionIndex = 49060;

	class LineGlow_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LineGlow_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
