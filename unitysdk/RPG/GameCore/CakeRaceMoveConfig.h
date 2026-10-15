#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceMoveConfig; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551270)
#define RPG_GAMECORE_CAKERACEMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551110)

namespace RPG::GameCore
{
	class CakeRaceMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::RPG::GameCore::CakeRaceMoveState MoveState; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::CakeRaceMoveStateConfig* MoveStateConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
