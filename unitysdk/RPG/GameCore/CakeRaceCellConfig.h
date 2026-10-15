#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACECELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E420)
#define RPG_GAMECORE_CAKERACECELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCellConfig_TypeDefinitionIndex = 18418;

	class CakeRaceCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCellType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x18
		::System::Int32 HazardWeight; // 0x20
		::System::UInt32 Height; // 0x24
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* GroudedActions; // 0x28
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* LeaveActions; // 0x30
		::System::Boolean CanRevive; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
