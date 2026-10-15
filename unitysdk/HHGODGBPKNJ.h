#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FKIDDLGAAMG;
namespace RPG::GameCore { class TaskContext; }

#define HHGODGBPKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBFE20)
#define HHGODGBPKNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CBFEE0)
#define HHGODGBPKNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CBFF20)
#define HHGODGBPKNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CBFE90)
#define HHGODGBPKNJ_TICK_OFFSET UNITYSDK_OFFSET(0x15CBFE30)

inline static constexpr unsigned int HHGODGBPKNJ_TypeDefinitionIndex = 58485;

	class HHGODGBPKNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::FKIDDLGAAMG* JKJPFJALGKO; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FKIDDLGAAMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FKIDDLGAAMG*))((::PBYTE)hIl2Cpp + HHGODGBPKNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHGODGBPKNJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGODGBPKNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGODGBPKNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHGODGBPKNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
