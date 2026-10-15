#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtAttachTrigger; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RTATTACHTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA491D0)
#define RPG_GAMECORE_RTATTACHTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA49290)
#define RPG_GAMECORE_RTATTACHTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA49190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAttachTrigger_TypeDefinitionIndex = 24130;

	class RtAttachTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x18
		::RPG::GameCore::JsonEnum* Layer; // 0x20
		::RPG::GameCore::RtCollision2DShapeConfig* Shape; // 0x28
		::RPG::GameCore::DynamicFloat* Tolerance; // 0x30
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::PredicateConfig* Predicate; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetEnter; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetExit; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetTrigger; // 0x60
		::RPG::GameCore::DynamicFloat* TriggerInterval; // 0x68
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x70
		::System::String* TriggerName; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAttachTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAttachTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAttachTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTATTACHTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
