#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"
namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class CharacterLineLightGroup_ExportData; }

#define SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE963D20)
#define SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xE963D10)

namespace ScenenLightManager
{
	inline static constexpr unsigned int CharacterLineLightGroup_SceneLightExportData_TypeDefinitionIndex = 49058;

	class CharacterLineLightGroup_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::CharacterLineLightGroup_ExportData* exportData; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* LMBKNCAIDLC()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_LMBKNCAIDLC_OFFSET))(this);
		}

	};
}
