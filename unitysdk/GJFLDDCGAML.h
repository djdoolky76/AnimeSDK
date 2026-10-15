#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAdditiveAnimState; }

#define GJFLDDCGAML_CTOR_OFFSET UNITYSDK_OFFSET(0x15A664E0)
#define GJFLDDCGAML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A664F0)
#define GJFLDDCGAML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A66530)
#define GJFLDDCGAML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A66BF0)
#define GJFLDDCGAML_TICK_OFFSET UNITYSDK_OFFSET(0x15A66C40)

inline static constexpr unsigned int GJFLDDCGAML_TypeDefinitionIndex = 55713;

	class GJFLDDCGAML : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerAdditiveAnimState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAdditiveAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAdditiveAnimState*))((::PBYTE)hIl2Cpp + GJFLDDCGAML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFLDDCGAML_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFLDDCGAML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFLDDCGAML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJFLDDCGAML_TICK_OFFSET))(this, a1);
		}

	};
