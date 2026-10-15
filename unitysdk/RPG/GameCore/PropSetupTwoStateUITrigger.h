#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropSetupTwoStateUITrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D956220)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D956290)
#define RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D956190)

namespace RPG::GameCore
{
	class PropSetupTwoStateUITrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ColliderRelativePath; // 0x18
		::RPG::GameCore::JsonEnum* IconType1; // 0x20
		::RPG::Client::TextID ButtonText1; // 0x28
		::RPG::GameCore::DynamicString* ButtonTextCustom1; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback1; // 0x40
		::RPG::GameCore::JsonEnum* IconType2; // 0x48
		::RPG::Client::TextID ButtonText2; // 0x50
		::RPG::GameCore::DynamicString* ButtonTextCustom2; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ButtonCallback2; // 0x68
		::System::Single UIProtectTime; // 0x70
		::System::Boolean ForceInteractInDanger; // 0x74
		::System::Boolean ConsiderAngleLimit; // 0x75
		::System::Byte _padding0[0x2];
		::System::Single InteractAngleRange; // 0x78
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::EntityType>* OverrideTargetTypes; // 0x80
		::System::Boolean TriggerByFakeAvatar; // 0x88
		::System::Boolean SkipFakeAvatar; // 0x89
		::System::Byte _padding2[0x6];
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x90
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPTWOSTATEUITRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
