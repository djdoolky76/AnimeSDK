#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfWaiterConfig; }

#define RPG_GAMECORE_ELFWAITERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C180)
#define RPG_GAMECORE_ELFWAITERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60A6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaiterConfig_TypeDefinitionIndex = 18470;

	class ElfWaiterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single WaiterSpeed; // 0x10
		::System::Single TableCleanTime; // 0x14
		::System::Single ObstacleCleanTime; // 0x18
		::System::Single ProcessEventTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAITERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfWaiterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfWaiterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAITERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
