#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearRegardAsSkillType; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7000)
#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B7010)
#define RPG_GAMECORE_CLEARREGARDASSKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B6FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearRegardAsSkillType_TypeDefinitionIndex = 23669;

	class ClearRegardAsSkillType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType OriginalSkillType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARREGARDASSKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
