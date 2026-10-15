#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIOALDPOLJE;

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8548A0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__MERGE_B__0_OFFSET UNITYSDK_OFFSET(0xC854F30)

namespace RPG::Client
{
	class BattleResulAutoDecomposeInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::LIOALDPOLJE* battleResultItem; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Merge_b__0(::LIOALDPOLJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIOALDPOLJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO___C__DISPLAYCLASS5_0__MERGE_B__0_OFFSET))(this, a1);
		}

	};
}
