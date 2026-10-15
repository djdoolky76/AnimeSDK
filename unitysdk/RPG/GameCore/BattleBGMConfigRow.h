#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleBGMConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBGMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452D00)
#define RPG_GAMECORE_BATTLEBGMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D452BB0)

namespace RPG::GameCore
{
	class BattleBGMConfigRow : public ::System::Object
	{
	public:
		::System::String* BGMName; // 0x10
		::RPG::GameCore::StageType StageType; // 0x18
		::System::UInt32 Priority; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleBGMConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleBGMConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBGMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
