#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class EnableElfEnvironment; }
namespace RPG::GameCore { class TaskContext; }

#define BNIICAKJOLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDB540)
#define BNIICAKJOLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDDB550)
#define BNIICAKJOLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDDB590)
#define BNIICAKJOLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDDB7A0)
#define BNIICAKJOLJ_TICK_OFFSET UNITYSDK_OFFSET(0xBDDB7F0)
#define BNIICAKJOLJ__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xBDDB850)
#define BNIICAKJOLJ__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0xBDDB860)

inline static constexpr unsigned int BNIICAKJOLJ_TypeDefinitionIndex = 58104;

	class BNIICAKJOLJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::EnableElfEnvironment* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::EnableElfEnvironment* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::EnableElfEnvironment*))((::PBYTE)hIl2Cpp + BNIICAKJOLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIICAKJOLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIICAKJOLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIICAKJOLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNIICAKJOLJ_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIICAKJOLJ__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNIICAKJOLJ__ONTASKBEGIN_B__2_1_OFFSET))(this);
		}

	};
