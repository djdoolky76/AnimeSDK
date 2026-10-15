#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }

#define RPG_GAMECORE_CAKERACEAOECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51D120)
#define RPG_GAMECORE_CAKERACEAOECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAoeConfig_TypeDefinitionIndex = 18366;

	class CakeRaceAoeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceAoeType Type; // 0x10
		::RPG::GameCore::CakeRaceAoeShowType ShowType; // 0x14
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* EnterActions; // 0x18
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* LeaveActions; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAOECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceAoeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceAoeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEAOECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
