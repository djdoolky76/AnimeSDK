#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifierDetachEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DEINBEJGMAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF16FCB0)
#define DEINBEJGMAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF16FCC0)
#define DEINBEJGMAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF16FD00)
#define DEINBEJGMAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF16FF30)
#define DEINBEJGMAM_TICK_OFFSET UNITYSDK_OFFSET(0xF16FF80)

inline static constexpr unsigned int DEINBEJGMAM_TypeDefinitionIndex = 56360;

	class DEINBEJGMAM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifierDetachEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierDetachEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierDetachEffect*))((::PBYTE)hIl2Cpp + DEINBEJGMAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEINBEJGMAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEINBEJGMAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEINBEJGMAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEINBEJGMAM_TICK_OFFSET))(this, a1);
		}

	};
