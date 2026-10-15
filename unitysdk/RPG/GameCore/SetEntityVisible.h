#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityVisibleReason.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1A90)
#define RPG_GAMECORE_SETENTITYVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB1AA0)
#define RPG_GAMECORE_SETENTITYVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB1A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityVisible_TypeDefinitionIndex = 20601;

	class SetEntityVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Boolean MuteColliderWhenInvisible; // 0x21
		::System::Boolean MuteTriggerWhenInvisible; // 0x22
		::System::Boolean SetAudio; // 0x23
		::RPG::GameCore::EntityVisibleReason Reason; // 0x24
		::System::String* UniqueKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
