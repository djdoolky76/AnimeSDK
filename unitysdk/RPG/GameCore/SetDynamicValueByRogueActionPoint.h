#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByRogueActionPoint; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9860)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9870)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9830)

namespace RPG::GameCore
{
	class SetDynamicValueByRogueActionPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueActionPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueActionPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRogueActionPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRogueActionPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEACTIONPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
