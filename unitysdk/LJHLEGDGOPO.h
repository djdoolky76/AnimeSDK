#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GotoUIPage; }
namespace RPG::GameCore { class TaskContext; }

#define LJHLEGDGOPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB59B0)
#define LJHLEGDGOPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFB59C0)
#define LJHLEGDGOPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFB5A60)
#define LJHLEGDGOPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFB5AE0)
#define LJHLEGDGOPO_TICK_OFFSET UNITYSDK_OFFSET(0xBFB5A00)

inline static constexpr unsigned int LJHLEGDGOPO_TypeDefinitionIndex = 59378;

	class LJHLEGDGOPO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GotoUIPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GotoUIPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GotoUIPage*))((::PBYTE)hIl2Cpp + LJHLEGDGOPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHLEGDGOPO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJHLEGDGOPO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHLEGDGOPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHLEGDGOPO_ONTASKRESET_OFFSET))(this);
		}

	};
