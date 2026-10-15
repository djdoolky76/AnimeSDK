#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define RPG_CUSTOMRP_TERRAINLAYERPREVIEWATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC794A0)

namespace RPG::CustomRP
{
	class TerrainLayerPreviewAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TERRAINLAYERPREVIEWATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
