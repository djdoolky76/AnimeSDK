#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleBGMStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBGMSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4253C0)
#define RPG_GAMECORE_BATTLEBGMSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4252A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBGMStateConfig_TypeDefinitionIndex = 18118;

	class BattleBGMStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* BGMStateList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleBGMStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleBGMStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
