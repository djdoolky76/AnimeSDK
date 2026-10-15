#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandbookTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CF2C0)
#define RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9CEBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandbookTypeRow_TypeDefinitionIndex = 14828;

	class RogueHandbookTypeRow : public ::System::Object
	{
	public:
		::System::String* HandBookIconPath; // 0x10
		::RPG::Client::TextID RogueHandBookType; // 0x18
		::RPG::Client::TextID RogueHandBookDesc; // 0x28
		::System::UInt32 HandBookType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueHandbookTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueHandbookTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
