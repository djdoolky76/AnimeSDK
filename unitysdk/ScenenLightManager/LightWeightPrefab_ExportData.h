#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
namespace System { class String; }

#define SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_EXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF4844D0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightWeightPrefab_ExportData_TypeDefinitionIndex = 50186;

	class LightWeightPrefab_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::String* prefabPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_EXPORTDATA_CTOR_OFFSET))(this);
		}

	};
}
