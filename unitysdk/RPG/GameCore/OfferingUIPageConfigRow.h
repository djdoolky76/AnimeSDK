#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfferingUIPageConfigRow; }

#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DF520)
#define RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DF040)

namespace RPG::GameCore
{
	class OfferingUIPageConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CostTitle; // 0x18
		::RPG::Client::TextID SubmitBtnName; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID MaxTip; // 0x48
		::RPG::Client::TextID LongTailDesc; // 0x58
		::RPG::Client::TextID LongTailTitle; // 0x68
		::RPG::Client::TextID LevelTitle; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfferingUIPageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfferingUIPageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGUIPAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
