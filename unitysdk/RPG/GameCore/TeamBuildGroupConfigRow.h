#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBuildGroupConfigRow; }

#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C4A0)
#define RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4C360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBuildGroupConfigRow_TypeDefinitionIndex = 15274;

	class TeamBuildGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamBuildGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamBuildGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
