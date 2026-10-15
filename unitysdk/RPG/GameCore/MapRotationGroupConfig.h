#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationGroupConfig; }

#define RPG_GAMECORE_MAPROTATIONGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D830170)
#define RPG_GAMECORE_MAPROTATIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82FFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGroupConfig_TypeDefinitionIndex = 17043;

	class MapRotationGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Boolean IsPermanent; // 0x14
		::System::Boolean IsPermanentPropTrigger; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
