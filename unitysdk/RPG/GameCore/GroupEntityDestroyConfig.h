#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupEntityDestroyConfig; }

#define RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74A8C0)
#define RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74A720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupEntityDestroyConfig_TypeDefinitionIndex = 21227;

	class GroupEntityDestroyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Boolean IsDestroyAllEntityType; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GroupLocalTargetType SpawnEntityType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupEntityDestroyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupEntityDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYDESTROYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
