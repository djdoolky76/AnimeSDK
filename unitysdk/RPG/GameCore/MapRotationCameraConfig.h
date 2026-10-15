#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82EE10)
#define RPG_GAMECORE_MAPROTATIONCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82ECC0)

namespace RPG::GameCore
{
	class MapRotationCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Single InBlendTime; // 0x18
		::System::Single OutBlendTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
