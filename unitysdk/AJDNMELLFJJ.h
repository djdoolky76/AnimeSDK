#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StackExtraStance; }
namespace RPG::GameCore { class TaskContext; }

#define AJDNMELLFJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB94F0)
#define AJDNMELLFJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CB9500)
#define AJDNMELLFJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB9540)
#define AJDNMELLFJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CB96C0)
#define AJDNMELLFJJ_TICK_OFFSET UNITYSDK_OFFSET(0x12CB9710)

inline static constexpr unsigned int AJDNMELLFJJ_TypeDefinitionIndex = 55645;

	class AJDNMELLFJJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackExtraStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackExtraStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackExtraStance*))((::PBYTE)hIl2Cpp + AJDNMELLFJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDNMELLFJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDNMELLFJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDNMELLFJJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDNMELLFJJ_TICK_OFFSET))(this, a1);
		}

	};
