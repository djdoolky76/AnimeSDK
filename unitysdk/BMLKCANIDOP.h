#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifySP; }
namespace RPG::GameCore { class TaskContext; }

#define BMLKCANIDOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC73CF80)
#define BMLKCANIDOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC73CF90)
#define BMLKCANIDOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC73CFD0)
#define BMLKCANIDOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC73D580)
#define BMLKCANIDOP_TICK_OFFSET UNITYSDK_OFFSET(0xC73D5D0)

inline static constexpr unsigned int BMLKCANIDOP_TypeDefinitionIndex = 56389;

	class BMLKCANIDOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifySP* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySP*))((::PBYTE)hIl2Cpp + BMLKCANIDOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLKCANIDOP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLKCANIDOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLKCANIDOP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMLKCANIDOP_TICK_OFFSET))(this, a1);
		}

	};
