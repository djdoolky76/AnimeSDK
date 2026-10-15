#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleRogueMagicData; }
namespace RPG::GameCore { class BattleRogueMagicData_RoundCount; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE5CB460)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xE5CB1B0)

namespace RPG::GameCore
{
	class BattleRogueMagicData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* ScepterList; // 0x10
		::RPG::GameCore::BattleRogueMagicData_RoundCount* RoundCnt; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleRogueMagicData* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_DEEPCLONE_OFFSET))(this);
		}

	};
}
