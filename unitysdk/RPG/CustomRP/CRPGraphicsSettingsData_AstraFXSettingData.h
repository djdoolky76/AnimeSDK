#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ASTRAFXSETTINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAA330)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_AstraFXSettingData_TypeDefinitionIndex = 38587;

	class CRPGraphicsSettingsData_AstraFXSettingData : public ::System::Object
	{
	public:
		::System::Boolean EnableAstraFX; // 0x10
		::System::Boolean EnableMeshModifier; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ASTRAFXSETTINGDATA_CTOR_OFFSET))(this);
		}

	};
}
