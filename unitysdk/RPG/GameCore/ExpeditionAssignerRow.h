#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionAssignerRow; }

#define RPG_GAMECORE_EXPEDITIONASSIGNERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E1A0)
#define RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68DB60)

namespace RPG::GameCore
{
	class ExpeditionAssignerRow : public ::System::Object
	{
	public:
		::System::UInt32 AssignerID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AssignerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionAssignerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionAssignerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
