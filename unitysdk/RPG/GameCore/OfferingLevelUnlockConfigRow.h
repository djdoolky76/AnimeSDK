#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingLevelUnlockConfigRow; }

#define RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DEDB0)
#define RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DEC30)

namespace RPG::GameCore
{
	class OfferingLevelUnlockConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID UnlockDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfferingLevelUnlockConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfferingLevelUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
