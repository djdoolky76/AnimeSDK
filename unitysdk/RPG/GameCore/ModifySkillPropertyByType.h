#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifySkillPropertyByType; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86C880)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86C8C0)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86C820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyByType_TypeDefinitionIndex = 23558;

	class ModifySkillPropertyByType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyByType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyByType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyByType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyByType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
