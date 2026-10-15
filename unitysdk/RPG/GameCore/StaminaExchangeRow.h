#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StaminaExchangeRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAMINAEXCHANGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEAEC0)
#define RPG_GAMECORE_STAMINAEXCHANGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAEA8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaExchangeRow_TypeDefinitionIndex = 14504;

	class StaminaExchangeRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Price; // 0x10
		::System::UInt32 ToStamina; // 0x18
		::System::UInt32 Times; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StaminaExchangeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StaminaExchangeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
