#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StartBattle; }
namespace RPG::GameCore { class TaskContext; }

#define GMNEECOIGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACD3A0)
#define GMNEECOIGNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ACD3B0)
#define GMNEECOIGNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ACD3F0)
#define GMNEECOIGNF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15ACD4C0)
#define GMNEECOIGNF_TICK_OFFSET UNITYSDK_OFFSET(0x15ACD510)

inline static constexpr unsigned int GMNEECOIGNF_TypeDefinitionIndex = 58720;

	class GMNEECOIGNF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StartBattle* OFKGLJOAMLD; // 0x20
		::System::Single EFKCJMFANEB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattle*))((::PBYTE)hIl2Cpp + GMNEECOIGNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMNEECOIGNF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMNEECOIGNF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMNEECOIGNF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMNEECOIGNF_TICK_OFFSET))(this, a1);
		}

	};
