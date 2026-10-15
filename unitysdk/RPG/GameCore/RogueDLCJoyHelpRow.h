#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCJoyHelpRow; }

#define RPG_GAMECORE_ROGUEDLCJOYHELPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C1CF0)
#define RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C1B70)

namespace RPG::GameCore
{
	class RogueDLCJoyHelpRow : public ::System::Object
	{
	public:
		::System::UInt32 AeonDimensionID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PlayShortDesc; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCJoyHelpRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCJoyHelpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCJOYHELPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
