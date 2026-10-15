#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffStackType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace RPG::GameCore { class CakeRaceEventHandler; }
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define RPG_GAMECORE_CAKERACEBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54CE00)
#define RPG_GAMECORE_CAKERACEBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54CB70)

namespace RPG::GameCore
{
	class CakeRaceBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceBuffName Name; // 0x10
		::System::Int32 DurationMs; // 0x14
		::RPG::GameCore::CakeRaceBuffStackType StackType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* PropertyModifiers; // 0x20
		::Il2CppArray<::RPG::GameCore::CakeRaceEventHandler*>* EventHandlers; // 0x28
		::Il2CppArray<::System::Int32>* Params; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
