#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTagRow; }

#define RPG_GAMECORE_ACTIVITYTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3814D0)
#define RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D381370)

namespace RPG::GameCore
{
	class ActivityTagRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::System::UInt32 TagID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
