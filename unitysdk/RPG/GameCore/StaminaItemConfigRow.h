#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StaminaItemConfigRow; }

#define RPG_GAMECORE_STAMINAITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEBE20)
#define RPG_GAMECORE_STAMINAITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAEB740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaItemConfigRow_TypeDefinitionIndex = 14506;

	class StaminaItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SortWeight; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x18
		::System::Boolean IsAlwaysShown; // 0x28
		::System::Byte _padding1[0x3];
		::System::UInt32 ItemID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StaminaItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StaminaItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
