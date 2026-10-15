#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E96A0)
#define RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyStackConfig_TypeDefinitionIndex = 16993;

	class PingPongEnemyStackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StackID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* NodeNameList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyStackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyStackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYSTACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
