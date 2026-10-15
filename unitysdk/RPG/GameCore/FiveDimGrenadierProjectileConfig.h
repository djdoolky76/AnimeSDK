#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C3DE0)
#define RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C3D30)

namespace RPG::GameCore
{
	class FiveDimGrenadierProjectileConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierProjectileConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierProjectileConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERPROJECTILECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
