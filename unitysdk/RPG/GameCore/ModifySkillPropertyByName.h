#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifySkillPropertyByName; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86C360)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86C3A0)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86C300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyByName_TypeDefinitionIndex = 23556;

	class ModifySkillPropertyByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* SkillTriggerKeyList; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* SkillIndexList; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
