#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateSharedSummonUnit; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5E00)
#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5FB0)
#define RPG_GAMECORE_CREATESHAREDSUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E5DC0)

namespace RPG::GameCore
{
	class CreateSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::RPG::GameCore::DynamicFloat* SummonUnitID; // 0x20
		::RPG::GameCore::DynamicString* UniqueName; // 0x28
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x30
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x38
		::RPG::GameCore::DynamicFloat* Distance; // 0x40
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x50
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x58
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginUse; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndUse; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESHAREDSUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
