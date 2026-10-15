#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SaveCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define MFICEJJNHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FED80)
#define MFICEJJNHIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FED90)
#define MFICEJJNHIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FEDD0)
#define MFICEJJNHIG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8FF040)
#define MFICEJJNHIG_TICK_OFFSET UNITYSDK_OFFSET(0xB8FF090)

	class MFICEJJNHIG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SaveCharacterState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveCharacterState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveCharacterState*))((::PBYTE)hIl2Cpp + MFICEJJNHIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFICEJJNHIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFICEJJNHIG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFICEJJNHIG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFICEJJNHIG_TICK_OFFSET))(this, a1);
		}

	};
