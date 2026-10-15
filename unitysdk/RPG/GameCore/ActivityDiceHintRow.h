#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceHintRow; }

#define RPG_GAMECORE_ACTIVITYDICEHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3260A0)
#define RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D325F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceHintRow_TypeDefinitionIndex = 11275;

	class ActivityDiceHintRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Content; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICEHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
