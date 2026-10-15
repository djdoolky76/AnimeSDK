#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }

#define RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF4A0)
#define RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF2B0)

namespace RPG::GameCore
{
	class SkillDataPropertyModifyItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x10
		::RPG::GameCore::SkillPropertyModifyType OperatorType; // 0x14
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillDataPropertyModifyItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillDataPropertyModifyItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
