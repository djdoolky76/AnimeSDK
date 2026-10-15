#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterRowData; }
namespace RPG::GameCore { class ChangeCharacterSkillRowDataItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGECHARACTERROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D537DC0)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D537E00)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D537D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterRowData_TypeDefinitionIndex = 23677;

	class ChangeCharacterRowData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* SPNeedSet; // 0x20
		::RPG::GameCore::DynamicFloat* SPNeedAdd; // 0x28
		::RPG::GameCore::AvatarBaseType MainAvatarBaseType; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* SubAvatarTypeList; // 0x38
		::RPG::GameCore::AttackDamageType DamageType; // 0x40
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::ChangeCharacterSkillRowDataItem*>* Skills; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
