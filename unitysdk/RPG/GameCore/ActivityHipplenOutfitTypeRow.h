#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D368450)
#define RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D368230)

namespace RPG::GameCore
{
	class ActivityHipplenOutfitTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconCheckPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::HipplenOutfitType Type; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenOutfitTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENOUTFITTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
