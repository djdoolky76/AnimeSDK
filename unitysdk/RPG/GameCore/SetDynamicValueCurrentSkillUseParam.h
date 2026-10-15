#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueCurrentSkillUseParam; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAADB10)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAADC90)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAADB20)
#define RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAADAE0)

namespace RPG::GameCore
{
	class SetDynamicValueCurrentSkillUseParam : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUECURRENTSKILLUSEPARAM_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
