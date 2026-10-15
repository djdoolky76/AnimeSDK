#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CAPNGJEIJOL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBaseTask; }
namespace System { class Object; }

#define HCKEGEPFOPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C20030)
#define HCKEGEPFOPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C200B0)
#define HCKEGEPFOPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C200F0)
#define HCKEGEPFOPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C20170)
#define HCKEGEPFOPO_TICK_OFFSET UNITYSDK_OFFSET(0x15C201C0)

	class HCKEGEPFOPO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::UniversalHotFixBaseTask* OPCCJDHNKEC; // 0x20
		::System::Object* FFMHIBPLNDN; // 0x28
		::System::Object* IIOFACHKJGP; // 0x30
		::System::Object* PGLHDMEECHP; // 0x38
		::CAPNGJEIJOL* CDMOKNNGKCC; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBaseTask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBaseTask*))((::PBYTE)hIl2Cpp + HCKEGEPFOPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKEGEPFOPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKEGEPFOPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKEGEPFOPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCKEGEPFOPO_TICK_OFFSET))(this, a1);
		}

	};
