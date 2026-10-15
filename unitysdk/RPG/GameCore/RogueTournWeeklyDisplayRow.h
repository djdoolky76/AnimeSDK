#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }

#define RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA435D0)
#define RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA43410)

namespace RPG::GameCore
{
	class RogueTournWeeklyDisplayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::AJCJJOCGIEL*>* DescParams; // 0x10
		::RPG::Client::TextID WeeklyDisplayContent; // 0x18
		::System::UInt32 WeeklyDisplayID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournWeeklyDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournWeeklyDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWEEKLYDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
