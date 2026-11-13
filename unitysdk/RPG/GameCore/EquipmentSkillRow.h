#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class EquipmentSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_EQUIPMENTSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F86C0)
#define RPG_GAMECORE_EQUIPMENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F0F7EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentSkillRow_TypeDefinitionIndex = 13314;

	class EquipmentSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AbilityProperty; // 0x20
		::RPG::Client::TextID SkillDesc; // 0x28
		::RPG::Client::TextID SkillName; // 0x38
		::System::UInt32 SkillID; // 0x48
		::System::UInt32 Level; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EquipmentSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EquipmentSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
