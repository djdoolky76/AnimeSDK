#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackScepterProperty; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSCEPTERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB03D30)
#define RPG_GAMECORE_STACKSCEPTERPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB03D40)
#define RPG_GAMECORE_STACKSCEPTERPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB03D00)

namespace RPG::GameCore
{
	class StackScepterProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RogueMagicScepterPropertyType Property; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackScepterProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackScepterProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSCEPTERPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
