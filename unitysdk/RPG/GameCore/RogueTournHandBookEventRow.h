#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJMGAPOCNJK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHandBookEventRow; }

#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BF10)
#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3BC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHandBookEventRow_TypeDefinitionIndex = 15039;

	class RogueTournHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::AJMGAPOCNJK*>* UnlockNPCProgressIDList; // 0x10
		::System::UInt32 ImageID; // 0x18
		::System::Boolean IsUsed; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockDisplayID; // 0x20
		::System::UInt32 EventHandbookID; // 0x24
		::System::UInt32 Priority; // 0x28
		::System::UInt32 TypeDisplayID; // 0x2C
		::RPG::Client::TextID EventTitle; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournHandBookEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
