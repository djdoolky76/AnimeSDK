#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCreateEntityAsync; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }

#define RPG_GAMECORE_ADVCREATEENTITYASYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB48B0)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAB48C0)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAB4880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateEntityAsync_TypeDefinitionIndex = 21569;

	class AdvCreateEntityAsync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupEntityCreateConfig*>* AdvancedSpawnList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
