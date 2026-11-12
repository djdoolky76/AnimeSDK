#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournCurseChestType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournCurseChestRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4A500)
#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC49BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCurseChestRow_TypeDefinitionIndex = 15202;

	class RogueTournCurseChestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::FixPoint ParamValue1; // 0x18
		::RPG::GameCore::FixPoint ParamValue2; // 0x20
		::System::UInt32 MainTitleDisplayID; // 0x28
		::System::UInt32 SubDescDisplayID; // 0x2C
		::RPG::GameCore::FixPoint ParamValue4; // 0x30
		::RPG::GameCore::FixPoint ParamValue3; // 0x38
		::System::UInt32 ChestID; // 0x40
		::System::UInt32 SubTitleDisplayID; // 0x44
		::RPG::GameCore::RogueTournCurseChestType Type; // 0x48
		::System::UInt32 MainDescDisplayID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournCurseChestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournCurseChestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
