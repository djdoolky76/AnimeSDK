#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class SetModifierValueByBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define GHKEFFNGBID_CTOR_OFFSET UNITYSDK_OFFSET(0x15A27670)
#define GHKEFFNGBID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A27680)
#define GHKEFFNGBID_KBFDCGENGIC_OFFSET UNITYSDK_OFFSET(0x15A278E0)
#define GHKEFFNGBID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A276C0)
#define GHKEFFNGBID_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A27A00)
#define GHKEFFNGBID_TICK_OFFSET UNITYSDK_OFFSET(0x15A27A50)

	class GHKEFFNGBID : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetModifierValueByBehaviorFlag* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Int32 EKIMKMCPHGC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValueByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValueByBehaviorFlag*))((::PBYTE)hIl2Cpp + GHKEFFNGBID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKEFFNGBID_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKEFFNGBID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKEFFNGBID_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHKEFFNGBID_TICK_OFFSET))(this, a1);
		}

		::System::Void KBFDCGENGIC(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + GHKEFFNGBID_KBFDCGENGIC_OFFSET))(this, a1);
		}

	};
