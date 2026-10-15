#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWorkbenchRow; }

#define RPG_GAMECORE_ROGUETOURNWORKBENCHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA43A20)
#define RPG_GAMECORE_ROGUETOURNWORKBENCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA438E0)

namespace RPG::GameCore
{
	class RogueTournWorkbenchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FuncList; // 0x10
		::System::UInt32 WorkbenchID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournWorkbenchRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournWorkbenchRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
