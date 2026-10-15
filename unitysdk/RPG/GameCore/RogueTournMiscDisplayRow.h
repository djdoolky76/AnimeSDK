#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournMiscDisplayRow; }

#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA405C0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3FFF0)

namespace RPG::GameCore
{
	class RogueTournMiscDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DisplayContent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournMiscDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
