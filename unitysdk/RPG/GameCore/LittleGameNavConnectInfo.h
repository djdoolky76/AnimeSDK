#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameNavConnectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace RPG::GameCore { class LittleGameNavConnectInfo; }

#define RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E51D0)
#define RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E4FE0)

namespace RPG::GameCore
{
	class LittleGameNavConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameNavConnectType ConnectionType; // 0x10
		::System::UInt32 LevelGroupID; // 0x14
		::System::UInt32 LevelInstanceID; // 0x18
		::System::UInt32 LittleGameEntityID; // 0x1C
		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* ConditionInfos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameNavConnectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameNavConnectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMENAVCONNECTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
