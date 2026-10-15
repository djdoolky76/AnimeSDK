#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings.h"

#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE1FFD40)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainDeformationReceiverMonoPlugin_TypeDefinitionIndex = 71032;

	class TerrainDeformationReceiverMonoPlugin
	{
	public:
		::System::Boolean ReceiveDeformation; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings DeformationLayerSettings0; // 0x34
		::RPG::Client::TerrainDeformationReceiverMonoPlugin_DeformationLayerSettings DeformationLayerSettings1; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
