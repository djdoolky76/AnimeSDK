#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationBasicLevelDamageRow; }

#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86F780)
#define RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E86F640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationBasicLevelDamageRow_TypeDefinitionIndex = 13289;

	class ElationBasicLevelDamageRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint ElationBasicLevelDamage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationBasicLevelDamageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationBasicLevelDamageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONBASICLEVELDAMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
