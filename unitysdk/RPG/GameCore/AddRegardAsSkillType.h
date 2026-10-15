#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddRegardAsSkillType; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDREGARDASSKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38B6F0)
#define RPG_GAMECORE_ADDREGARDASSKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38B700)
#define RPG_GAMECORE_ADDREGARDASSKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38B6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddRegardAsSkillType_TypeDefinitionIndex = 23668;

	class AddRegardAsSkillType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::SkillType OriginalSkillType; // 0x20
		::RPG::GameCore::SkillType RegardSkillType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddRegardAsSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddRegardAsSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDREGARDASSKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
