#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NMBCOGABNMC;
namespace RPG::GameCore { class TaskContext; }

#define DMEBJIOAEIN_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBA2E0)
#define DMEBJIOAEIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEBA3C0)

	class DMEBJIOAEIN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMBCOGABNMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMBCOGABNMC*))((::PBYTE)hIl2Cpp + DMEBJIOAEIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEBJIOAEIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
