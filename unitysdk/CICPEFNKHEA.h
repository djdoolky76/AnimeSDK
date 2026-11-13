#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CICPEFNKHEA_CTOR_OFFSET UNITYSDK_OFFSET(0x16E37490)
#define CICPEFNKHEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E374A0)
#define CICPEFNKHEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E374E0)
#define CICPEFNKHEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E37C30)
#define CICPEFNKHEA_TICK_OFFSET UNITYSDK_OFFSET(0x16E37C80)

inline static constexpr unsigned int CICPEFNKHEA_TypeDefinitionIndex = 59286;

	class CICPEFNKHEA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CreateCharacter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateCharacter*))((::PBYTE)hIl2Cpp + CICPEFNKHEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICPEFNKHEA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICPEFNKHEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CICPEFNKHEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CICPEFNKHEA_TICK_OFFSET))(this, a1);
		}

	};
