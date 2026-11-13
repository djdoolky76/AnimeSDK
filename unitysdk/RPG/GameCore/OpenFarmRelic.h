#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenFarmRelic; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENFARMRELIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F134F10)
#define RPG_GAMECORE_OPENFARMRELIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F134F20)
#define RPG_GAMECORE_OPENFARMRELIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F134EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmRelic_TypeDefinitionIndex = 22498;

	class OpenFarmRelic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMRELIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
