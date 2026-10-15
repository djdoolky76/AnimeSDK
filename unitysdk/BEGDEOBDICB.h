#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifyDamageData; }
namespace RPG::GameCore { class TaskContext; }

#define BEGDEOBDICB_CTOR_OFFSET UNITYSDK_OFFSET(0x1631A0B0)
#define BEGDEOBDICB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1631A0C0)
#define BEGDEOBDICB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1631A100)
#define BEGDEOBDICB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1631A370)
#define BEGDEOBDICB_TICK_OFFSET UNITYSDK_OFFSET(0x1631A3C0)

	class BEGDEOBDICB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifyDamageData* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDamageData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDamageData*))((::PBYTE)hIl2Cpp + BEGDEOBDICB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGDEOBDICB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGDEOBDICB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGDEOBDICB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEGDEOBDICB_TICK_OFFSET))(this, a1);
		}

	};
