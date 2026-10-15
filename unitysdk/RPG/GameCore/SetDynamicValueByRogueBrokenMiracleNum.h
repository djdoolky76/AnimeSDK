#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueBrokenMiracleNum; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7C060)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7C070)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7C030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBrokenMiracleNum_TypeDefinitionIndex = 21773;

	class SetDynamicValueByRogueBrokenMiracleNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueBrokenMiracleNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBROKENMIRACLENUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
