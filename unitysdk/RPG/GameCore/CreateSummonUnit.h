#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateSummonUnit; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CREATESUMMONUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6540)
#define RPG_GAMECORE_CREATESUMMONUNIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6700)
#define RPG_GAMECORE_CREATESUMMONUNIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6500)

namespace RPG::GameCore
{
	class CreateSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::System::UInt32 SummonUnitID; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* SummonUnitIDKey; // 0x28
		::System::String* UniqueName; // 0x30
		::System::String* UniqueNameKey; // 0x38
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x40
		::RPG::GameCore::TargetEvaluator* PosTarget; // 0x48
		::RPG::GameCore::DynamicFloat* Distance; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x58
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x60
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x68
		::RPG::GameCore::DynamicFloat* Duration; // 0x70
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x78
		::System::Boolean ForbidSkillMsg; // 0x80
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x88
		::ENEIHJJPNPI* DynamicValues; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateSummonUnit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESUMMONUNIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
