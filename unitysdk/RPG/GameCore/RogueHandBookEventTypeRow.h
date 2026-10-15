#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookEventTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CDF00)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9CDD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventTypeRow_TypeDefinitionIndex = 14833;

	class RogueHandBookEventTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeIcon; // 0x10
		::System::UInt32 RogueHandBookEventType; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::Client::TextID RogueEventTypeTitle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueHandBookEventTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueHandBookEventTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
