#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvSpawnMoney; }
namespace RPG::GameCore { class TaskContext; }

#define EFHKEMAGEOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A336B40)
#define EFHKEMAGEOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A336D00)
#define EFHKEMAGEOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A336B50)
#define EFHKEMAGEOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A336CB0)
#define EFHKEMAGEOK_TICK_OFFSET UNITYSDK_OFFSET(0x1A336D60)

inline static constexpr unsigned int EFHKEMAGEOK_TypeDefinitionIndex = 59128;

	class EFHKEMAGEOK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvSpawnMoney* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSpawnMoney* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSpawnMoney*))((::PBYTE)hIl2Cpp + EFHKEMAGEOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHKEMAGEOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHKEMAGEOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHKEMAGEOK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFHKEMAGEOK_TICK_OFFSET))(this, a1);
		}

	};
