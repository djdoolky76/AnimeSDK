#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class KOKDNGLIFND;

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDF9CF90)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__GETALLDATABYTOURN_B__0_OFFSET UNITYSDK_OFFSET(0xDF9D290)

namespace RPG::Client
{
	class RogueTournDifficultyCompData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode tournMode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllDataByTourn_b__0(::KOKDNGLIFND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOKDNGLIFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__GETALLDATABYTOURN_B__0_OFFSET))(this, a1);
		}

	};
}
