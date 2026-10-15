#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterSkillRowDataItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D565EC0)
#define RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D565BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterSkillRowDataItem_TypeDefinitionIndex = 23676;

	class ChangeCharacterSkillRowDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerKey; // 0x10
		::RPG::GameCore::AttackDamageType DamageType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SPNeedSet; // 0x20
		::RPG::GameCore::DynamicFloat* SPNeedAdd; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::DynamicFloat*>* ParamList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::DynamicFloat*>* SimpleParamList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterSkillRowDataItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterSkillRowDataItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
