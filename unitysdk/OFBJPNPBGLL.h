#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class BlockEnvExportDataHeader; }

#define OFBJPNPBGLL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3D0F0)
#define OFBJPNPBGLL_HKGGINIOJOG_OFFSET UNITYSDK_OFFSET(0xBE3CED0)

	class OFBJPNPBGLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBJPNPBGLL_CTOR_OFFSET))(this);
		}

		static ::System::Boolean HKGGINIOJOG(::ScenenLightManager::BlockEnvExportDataHeader* a1, ::ScenenLightManager::BlockEnvExportDataHeader* a2)
		{
			return ((::System::Boolean(*)(::ScenenLightManager::BlockEnvExportDataHeader*, ::ScenenLightManager::BlockEnvExportDataHeader*))((::PBYTE)hIl2Cpp + OFBJPNPBGLL_HKGGINIOJOG_OFFSET))(a1, a2);
		}

	};
