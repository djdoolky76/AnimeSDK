#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0xCC2F760)

namespace RPG::Client::DiceCombat
{
	class DiceCombatProgress : public ::System::Object
	{
	public:
		::System::UInt32 TotalProgress; // 0x10
		::System::UInt32 CurProgress; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESS_CTOR_OFFSET))(this);
		}

	};
}
