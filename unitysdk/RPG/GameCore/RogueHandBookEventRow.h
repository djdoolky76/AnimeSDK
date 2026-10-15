#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJMGAPOCNJK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookEventRow; }

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A03B0)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D99FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventRow_TypeDefinitionIndex = 14831;

	class RogueHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::AJMGAPOCNJK*>* UnlockNPCProgressIDList; // 0x10
		::Il2CppArray<::System::UInt32>* EventTypeList; // 0x18
		::System::UInt32 EventReward; // 0x20
		::System::UInt32 ImageID; // 0x24
		::RPG::Client::TextID UnlockHintDesc; // 0x28
		::RPG::Client::TextID EventTitle; // 0x38
		::RPG::Client::TextID EventType; // 0x48
		::System::UInt32 EventHandbookID; // 0x58
		::System::UInt32 Order; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueHandBookEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
