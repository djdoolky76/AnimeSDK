#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEventSentenceRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86930)
#define RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE86690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEventSentenceRow_TypeDefinitionIndex = 11764;

	class IdleLiveEventSentenceRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID Sentence; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 Index; // 0x38
		::System::UInt32 SectionID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEventSentenceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEventSentenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
