#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactsTypeRow; }

#define RPG_GAMECORE_MESSAGECONTACTSTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D876AB0)
#define RPG_GAMECORE_MESSAGECONTACTSTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D876430)

namespace RPG::GameCore
{
	class MessageContactsTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 ContactsType; // 0x10
		::System::UInt32 SortID; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageContactsTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageContactsTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
