#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerChatRow; }

#define RPG_GAMECORE_DRINKMAKERCHATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E858670)
#define RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E858040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerChatRow_TypeDefinitionIndex = 13256;

	class DrinkMakerChatRow : public ::System::Object
	{
	public:
		::System::UInt32 RequestID; // 0x10
		::System::UInt32 ChatID; // 0x14
		::System::UInt32 SuccessNextChatID; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::System::UInt32 FailNextChatID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerChatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerChatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
