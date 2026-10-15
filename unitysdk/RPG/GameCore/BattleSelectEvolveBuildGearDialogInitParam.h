#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EvolveBuildGearSelectInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLESELECTEVOLVEBUILDGEARDIALOGINITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE5CBB20)
#define RPG_GAMECORE_BATTLESELECTEVOLVEBUILDGEARDIALOGINITPARAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5CBA90)

namespace RPG::GameCore
{
	class BattleSelectEvolveBuildGearDialogInitParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearSelectInfo*>* ForSelected; // 0x10
		::System::UInt32 MaxCount; // 0x18
		::System::UInt32 OpenLevel; // 0x1C
		::System::UInt32 CurCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESELECTEVOLVEBUILDGEARDIALOGINITPARAM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESELECTEVOLVEBUILDGEARDIALOGINITPARAM_DISPOSE_OFFSET))(this);
		}

	};
}
