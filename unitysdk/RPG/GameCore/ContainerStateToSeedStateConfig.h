#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ContainerStateToSeedStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DBAD0)
#define RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB9A0)

namespace RPG::GameCore
{
	class ContainerStateToSeedStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ContainerStateName; // 0x10
		::System::String* SeedStateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ContainerStateToSeedStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ContainerStateToSeedStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
