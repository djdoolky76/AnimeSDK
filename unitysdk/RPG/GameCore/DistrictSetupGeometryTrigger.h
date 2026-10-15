#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistrictSetupGeometryTrigger; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EAEA0)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5EAEB0)
#define RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EAE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictSetupGeometryTrigger_TypeDefinitionIndex = 21972;

	class DistrictSetupGeometryTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x20
		::System::Single TriggerUpdateInterval; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistrictSetupGeometryTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistrictSetupGeometryTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTSETUPGEOMETRYTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
