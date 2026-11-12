#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RevertActionEntityToObserveState; }
namespace RPG::GameCore { class TaskContext; }

#define CCPFAPIFKOE_CTOR_OFFSET UNITYSDK_OFFSET(0xD0BCE10)
#define CCPFAPIFKOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0BD120)
#define CCPFAPIFKOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0BCE20)
#define CCPFAPIFKOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD0BD0D0)
#define CCPFAPIFKOE_TICK_OFFSET UNITYSDK_OFFSET(0xD0BD070)

inline static constexpr unsigned int CCPFAPIFKOE_TypeDefinitionIndex = 56507;

	class CCPFAPIFKOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RevertActionEntityToObserveState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPFAPIFKOE_DISPOSE_OFFSET))(this);
		}

	};
