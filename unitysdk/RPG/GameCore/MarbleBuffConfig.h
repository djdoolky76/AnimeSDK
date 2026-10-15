#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleBuffEffect.h"
#include "unitysdk/RPG/GameCore/MarbleBuffType.h"
#include "unitysdk/RPG/GameCore/MarbleLifeTime.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D837A70)
#define RPG_GAMECORE_MARBLEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D837650)

namespace RPG::GameCore
{
	class MarbleBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleBuffType BuffType; // 0x10
		::System::UInt32 MaxStackCount; // 0x14
		::RPG::GameCore::MarbleLifeTime LifeTime; // 0x18
		::System::Int32 RoundCount; // 0x1C
		::System::Int32 ActionCount; // 0x20
		::RPG::GameCore::MarbleBuffEffect BuffEffect; // 0x24
		::RPG::GameCore::MarbleValue ValueType; // 0x28
		::RPG::GameCore::MarbleOperation Operation; // 0x2C
		::System::Single Value; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* ValueDynamic; // 0x38
		::System::Boolean RemoveOnSourceDeath; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
