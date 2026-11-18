#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_MINASPECT_OFFSET UNITYSDK_OFFSET(0x745CD0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x745C70)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_LONBINKAKDP_OFFSET UNITYSDK_OFFSET(0x14AFC0E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_AspectWH_TypeDefinitionIndex = 60949;

	struct alignas(4) MonoEffectPluginAttachToCamera_AspectWH
	{
		::System::Int32 W; // 0x10
		::System::Int32 H; // 0x14
		::System::Boolean IsAlign9; // 0x18

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_RATIO_OFFSET))(this);
		}

		::System::String* get_MinAspect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_MINASPECT_OFFSET))(this);
		}

		static ::System::Int32 LONBINKAKDP(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_LONBINKAKDP_OFFSET))(DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
