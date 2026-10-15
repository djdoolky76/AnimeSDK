#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class PropStateExecute; }
namespace RPG::GameCore { class TaskContext; }

#define HKEDANCIGMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D40790)
#define HKEDANCIGMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D407A0)
#define HKEDANCIGMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D40800)
#define HKEDANCIGMG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D40990)
#define HKEDANCIGMG_TICK_OFFSET UNITYSDK_OFFSET(0x15D409F0)

inline static constexpr unsigned int HKEDANCIGMG_TypeDefinitionIndex = 53184;

	class HKEDANCIGMG : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* KPDELFCJIIA; // 0x18
		::RPG::GameCore::PropStateExecute* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStateExecute* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStateExecute*))((::PBYTE)hIl2Cpp + HKEDANCIGMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEDANCIGMG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEDANCIGMG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEDANCIGMG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKEDANCIGMG_TICK_OFFSET))(this, a1);
		}

	};
