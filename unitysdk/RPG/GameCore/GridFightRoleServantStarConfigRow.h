#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleServantStarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73EE90)
#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73E990)

namespace RPG::GameCore
{
	class GridFightRoleServantStarConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonOverrideConfig; // 0x10
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x18
		::System::String* SpeedBase; // 0x20
		::Il2CppArray<::System::UInt32>* ServantShowSkiilIDList; // 0x28
		::System::String* HPBase; // 0x30
		::System::String* HPInherit; // 0x38
		::System::String* AIPath; // 0x40
		::System::String* SpeedInherit; // 0x48
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x50
		::System::UInt32 SpeedSkill; // 0x58
		::System::UInt32 Star; // 0x5C
		::RPG::GameCore::FixPoint Aggro; // 0x60
		::System::UInt32 ServantID; // 0x68
		::System::UInt32 ID; // 0x6C
		::System::UInt32 HPSkill; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleServantStarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleServantStarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
