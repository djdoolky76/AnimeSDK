#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupEventBase; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D915D70)
#define RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyGroupConfig_TypeDefinitionIndex = 16995;

	class PingPongEnemyGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* UnitNameList; // 0x18
		::Il2CppArray<::RPG::GameCore::PingPongEnemyGroupEventBase*>* EventList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
