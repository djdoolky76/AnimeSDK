#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatGreetingRow; }
namespace System { class String; }

#define RPG_GAMECORE_PAMCHATGREETINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13FAD0)
#define RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F13F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatGreetingRow_TypeDefinitionIndex = 14472;

	class PamChatGreetingRow : public ::System::Object
	{
	public:
		::System::String* Condition; // 0x10
		::Il2CppArray<::System::UInt32>* GreetingTextIDList; // 0x18
		::RPG::Client::TextID HudBubble; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 Priority; // 0x34
		::System::Boolean IsDailyGreeting; // 0x38
		::System::Boolean CanTriggerWhenLLMDisabled; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamChatGreetingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
