#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueMiracleRecordParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9ED0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9EE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9E90)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueMiracleRecordParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
