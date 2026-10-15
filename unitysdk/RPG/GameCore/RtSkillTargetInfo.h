#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RtSkillTargetInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLTARGETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64EF0)
#define RPG_GAMECORE_RTSKILLTARGETINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA63E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillTargetInfo_TypeDefinitionIndex = 17669;

	class RtSkillTargetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask Team; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask EntityType; // 0x18
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Filter; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLTARGETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLTARGETINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
