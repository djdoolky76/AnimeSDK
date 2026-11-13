#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialSave; }

#define DBFLEKILPNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1488C0)
#define DBFLEKILPNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1488D0)
#define DBFLEKILPNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B148910)
#define DBFLEKILPNO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B148990)
#define DBFLEKILPNO_TICK_OFFSET UNITYSDK_OFFSET(0x1B1489E0)

inline static constexpr unsigned int DBFLEKILPNO_TypeDefinitionIndex = 60096;

	class DBFLEKILPNO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialSave* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialSave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialSave*))((::PBYTE)hIl2Cpp + DBFLEKILPNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFLEKILPNO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFLEKILPNO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFLEKILPNO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBFLEKILPNO_TICK_OFFSET))(this, a1);
		}

	};
