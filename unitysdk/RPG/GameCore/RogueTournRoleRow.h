#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoleRow; }

#define RPG_GAMECORE_ROGUETOURNROLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA13790)
#define RPG_GAMECORE_ROGUETOURNROLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA136A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoleRow_TypeDefinitionIndex = 15001;

	class RogueTournRoleRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 BuffID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournRoleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournRoleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
