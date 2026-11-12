#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBossHPValue; }
namespace RPG::GameCore { class TaskContext; }

#define DEGHOHHPCDF_CTOR_OFFSET UNITYSDK_OFFSET(0xF16D6A0)
#define DEGHOHHPCDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF16D6B0)
#define DEGHOHHPCDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF16D6F0)
#define DEGHOHHPCDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF16D770)
#define DEGHOHHPCDF_TICK_OFFSET UNITYSDK_OFFSET(0xF16D7C0)

inline static constexpr unsigned int DEGHOHHPCDF_TypeDefinitionIndex = 57668;

	class DEGHOHHPCDF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowBossHPValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBossHPValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + DEGHOHHPCDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGHOHHPCDF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGHOHHPCDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGHOHHPCDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEGHOHHPCDF_TICK_OFFSET))(this, a1);
		}

	};
