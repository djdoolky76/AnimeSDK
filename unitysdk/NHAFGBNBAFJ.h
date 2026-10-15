#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define NHAFGBNBAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB5150)
#define NHAFGBNBAFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB5220)
#define NHAFGBNBAFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB5260)
#define NHAFGBNBAFJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBB56E0)
#define NHAFGBNBAFJ_TICK_OFFSET UNITYSDK_OFFSET(0xBBB5730)

	class NHAFGBNBAFJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDynamicEntityParam* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicEntityParam*))((::PBYTE)hIl2Cpp + NHAFGBNBAFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAFGBNBAFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAFGBNBAFJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAFGBNBAFJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHAFGBNBAFJ_TICK_OFFSET))(this, a1);
		}

	};
