#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChatStoryPhaseRow; }

#define RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98CAF0)
#define RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98C920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChatStoryPhaseRow_TypeDefinitionIndex = 11839;

	class IdleLiveChatStoryPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChatList; // 0x10
		::System::Single Interval; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Single FlySpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveChatStoryPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveChatStoryPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATSTORYPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
