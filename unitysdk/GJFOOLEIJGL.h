#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SaveMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GJFOOLEIJGL_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0x15A66EB0)
#define GJFOOLEIJGL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A66CA0)
#define GJFOOLEIJGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A66CC0)
#define GJFOOLEIJGL_EDLGIJCEENL_OFFSET UNITYSDK_OFFSET(0x15A670A0)
#define GJFOOLEIJGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A66DD0)
#define GJFOOLEIJGL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A66F70)
#define GJFOOLEIJGL_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0x15A66D10)
#define GJFOOLEIJGL_TICK_OFFSET UNITYSDK_OFFSET(0x15A66FC0)

	class GJFOOLEIJGL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SaveMessage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single JEFFJNPPBGC; // 0x28
		::System::Single FJGFCHGGPIL; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveMessage*))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void EDLGIJCEENL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFOOLEIJGL_EDLGIJCEENL_OFFSET))(this, a1);
		}

	};
