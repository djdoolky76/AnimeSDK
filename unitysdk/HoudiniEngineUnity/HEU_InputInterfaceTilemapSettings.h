#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_INPUTINTERFACETILEMAPSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3816E80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceTilemapSettings_TypeDefinitionIndex = 17879;

	class HEU_InputInterfaceTilemapSettings : public ::System::Object
	{
	public:
		::System::Boolean _createGroupsForTiles; // 0x10
		::System::Boolean _exportUnusedTiles; // 0x11
		::System::Boolean _applyTileColor; // 0x12
		::System::Boolean _applyTilemapOrientation; // 0x13

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTINTERFACETILEMAPSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
