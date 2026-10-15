#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RemoveDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define EAKPPEEFGBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1267DF80)
#define EAKPPEEFGBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1267E050)
#define EAKPPEEFGBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1267E090)
#define EAKPPEEFGBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1267E480)
#define EAKPPEEFGBI_TICK_OFFSET UNITYSDK_OFFSET(0x1267E4D0)

inline static constexpr unsigned int EAKPPEEFGBI_TypeDefinitionIndex = 55302;

	class EAKPPEEFGBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveDynamicEntityParam* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveDynamicEntityParam*))((::PBYTE)hIl2Cpp + EAKPPEEFGBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKPPEEFGBI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKPPEEFGBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKPPEEFGBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAKPPEEFGBI_TICK_OFFSET))(this, a1);
		}

	};
