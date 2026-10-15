#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class PredicateToMakeFail; }
namespace RPG::GameCore { class TaskContext; }

#define GJEHFHBNKBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A62350)
#define GJEHFHBNKBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A624B0)
#define GJEHFHBNKBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A62610)
#define GJEHFHBNKBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A62930)
#define GJEHFHBNKBA_TICK_OFFSET UNITYSDK_OFFSET(0x15A62BF0)

inline static constexpr unsigned int GJEHFHBNKBA_TypeDefinitionIndex = 55265;

	class GJEHFHBNKBA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PredicateToMakeFail* OFKGLJOAMLD; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + GJEHFHBNKBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHFHBNKBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHFHBNKBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHFHBNKBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJEHFHBNKBA_TICK_OFFSET))(this, a1);
		}

	};
