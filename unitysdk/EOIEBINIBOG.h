#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RemoveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define EOIEBINIBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x155C22D0)
#define EOIEBINIBOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C2380)
#define EOIEBINIBOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C23C0)
#define EOIEBINIBOG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155C2AB0)
#define EOIEBINIBOG_TICK_OFFSET UNITYSDK_OFFSET(0x155C2B00)

	class EOIEBINIBOG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveEffect* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::StringHash PPKJNOJIJMH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEffect*))((::PBYTE)hIl2Cpp + EOIEBINIBOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEBINIBOG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEBINIBOG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIEBINIBOG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOIEBINIBOG_TICK_OFFSET))(this, a1);
		}

	};
