#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamChatGreetingRow; }
namespace System { class String; }

#define RPG_GAMECORE_PAMCHATGREETINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EBF40)
#define RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EBC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatGreetingRow_TypeDefinitionIndex = 14315;

	class PamChatGreetingRow : public ::System::Object
	{
	public:
		::System::String* Condition; // 0x10
		::Il2CppArray<::System::UInt32>* GreetingTextIDList; // 0x18
		::System::UInt32 Priority; // 0x20
		::System::Boolean CanTriggerWhenLLMDisabled; // 0x24
		::System::Boolean IsDailyGreeting; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 ID; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID HudBubble; // 0x30
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
