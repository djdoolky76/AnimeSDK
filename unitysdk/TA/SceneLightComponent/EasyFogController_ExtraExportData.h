#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int EasyFogController_ExtraExportData_TypeDefinitionIndex = 16114;

	class EasyFogController_ExtraExportData : public ::System::Object
	{
	public:
		::System::String* fogNormalMapPath; // 0x10
		::System::String* opacityMapPath; // 0x18
		::System::String* easyFogTemplateMaterialPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
