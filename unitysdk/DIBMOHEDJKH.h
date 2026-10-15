#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveGlobalTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define DIBMOHEDJKH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE9A70)
#define DIBMOHEDJKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE9A80)
#define DIBMOHEDJKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBE9AC0)
#define DIBMOHEDJKH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBE9B50)
#define DIBMOHEDJKH_TICK_OFFSET UNITYSDK_OFFSET(0xEBE9BA0)

inline static constexpr unsigned int DIBMOHEDJKH_TypeDefinitionIndex = 55307;

	class DIBMOHEDJKH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveGlobalTimeSlow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveGlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveGlobalTimeSlow*))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_TICK_OFFSET))(this, a1);
		}

	};
