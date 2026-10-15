#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IEIGLAPKDNK;
namespace RPG::GameCore { class StackAdditionalTeamBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define GCMJFGAPLEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15979420)
#define GCMJFGAPLEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159794E0)
#define GCMJFGAPLEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15979580)
#define GCMJFGAPLEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15979990)
#define GCMJFGAPLEE_TICK_OFFSET UNITYSDK_OFFSET(0x159799E0)

inline static constexpr unsigned int GCMJFGAPLEE_TypeDefinitionIndex = 55636;

	class GCMJFGAPLEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackAdditionalTeamBoostPoint* OFKGLJOAMLD; // 0x18
		::IEIGLAPKDNK* MFFNFOHJGGL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*))((::PBYTE)hIl2Cpp + GCMJFGAPLEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJFGAPLEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJFGAPLEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMJFGAPLEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCMJFGAPLEE_TICK_OFFSET))(this, a1);
		}

	};
