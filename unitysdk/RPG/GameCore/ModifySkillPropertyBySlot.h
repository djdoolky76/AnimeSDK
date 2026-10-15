#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifySkillPropertyBySlot; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86C620)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86C660)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86C5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyBySlot_TypeDefinitionIndex = 23557;

	class ModifySkillPropertyBySlot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType SkillType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyBySlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySkillPropertyBySlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySkillPropertyBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
