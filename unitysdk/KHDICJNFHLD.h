#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddMissionMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define KHDICJNFHLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FFB80)
#define KHDICJNFHLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FFB90)
#define KHDICJNFHLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3FFBD0)
#define KHDICJNFHLD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3FFFF0)
#define KHDICJNFHLD_TICK_OFFSET UNITYSDK_OFFSET(0xB400040)

inline static constexpr unsigned int KHDICJNFHLD_TypeDefinitionIndex = 57865;

	class KHDICJNFHLD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AddMissionMenuItem* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMissionMenuItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMissionMenuItem*))((::PBYTE)hIl2Cpp + KHDICJNFHLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDICJNFHLD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDICJNFHLD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDICJNFHLD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHDICJNFHLD_TICK_OFFSET))(this, a1);
		}

	};
