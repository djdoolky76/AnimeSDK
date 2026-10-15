#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJMGAPOCNJK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHandBookEventRow; }

#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0E670)
#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA0E360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHandBookEventRow_TypeDefinitionIndex = 15039;

	class RogueTournHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::AJMGAPOCNJK*>* UnlockNPCProgressIDList; // 0x10
		::System::Boolean IsUsed; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 EventHandbookID; // 0x1C
		::RPG::Client::TextID EventTitle; // 0x20
		::System::UInt32 ImageID; // 0x30
		::System::UInt32 Priority; // 0x34
		::System::UInt32 UnlockDisplayID; // 0x38
		::System::UInt32 TypeDisplayID; // 0x3C
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
