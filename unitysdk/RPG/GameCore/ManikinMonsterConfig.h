#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ManikinMonsterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MANIKINMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8284E0)
#define RPG_GAMECORE_MANIKINMONSTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8281F0)

namespace RPG::GameCore
{
	class ManikinMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x10
		::RPG::GameCore::MonsterBodySize MonsterBodySize; // 0x18
		::System::Single OutlineWidth; // 0x1C
		::Il2CppArray<::System::String*>* AbilityList; // 0x20
		::System::Boolean EnableFloor; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* ResidentEffectKey; // 0x30
		::System::String* ResidentPossessionKey; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ManikinMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ManikinMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
