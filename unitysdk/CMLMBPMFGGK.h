#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ElfRestaurantPauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define CMLMBPMFGGK_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3B290)
#define CMLMBPMFGGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA3B510)
#define CMLMBPMFGGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA3B2C0)

	class CMLMBPMFGGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfRestaurantPauseGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfRestaurantPauseGame*))((::PBYTE)hIl2Cpp + CMLMBPMFGGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLMBPMFGGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLMBPMFGGK_DISPOSE_OFFSET))(this);
		}

	};
