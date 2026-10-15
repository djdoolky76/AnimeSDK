#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveDitherGroup; }
namespace RPG::GameCore { class TaskContext; }

#define DOAMKIOFOGD_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD7540)
#define DOAMKIOFOGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FD7550)
#define DOAMKIOFOGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD7590)
#define DOAMKIOFOGD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FD7650)
#define DOAMKIOFOGD_TICK_OFFSET UNITYSDK_OFFSET(0x11FD76A0)

inline static constexpr unsigned int DOAMKIOFOGD_TypeDefinitionIndex = 53869;

	class DOAMKIOFOGD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveDitherGroup* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveDitherGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveDitherGroup*))((::PBYTE)hIl2Cpp + DOAMKIOFOGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAMKIOFOGD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAMKIOFOGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAMKIOFOGD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOAMKIOFOGD_TICK_OFFSET))(this, a1);
		}

	};
