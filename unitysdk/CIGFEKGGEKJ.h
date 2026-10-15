#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CIGFEKGGEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF70A90)
#define CIGFEKGGEKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF70AA0)
#define CIGFEKGGEKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF70AE0)
#define CIGFEKGGEKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF710F0)
#define CIGFEKGGEKJ_TICK_OFFSET UNITYSDK_OFFSET(0xCF71140)

	class CIGFEKGGEKJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetCharacterFormation* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_TICK_OFFSET))(this, a1);
		}

	};
