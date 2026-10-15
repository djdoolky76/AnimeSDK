#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByRaidTargetProgress; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9320)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA9540)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA9330)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA92F0)

namespace RPG::GameCore
{
	class SetDynamicValueByRaidTargetProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* RaidTargetID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
