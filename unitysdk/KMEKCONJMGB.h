#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyCreateWorld; }
namespace RPG::GameCore { class TaskContext; }

#define KMEKCONJMGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB546040)
#define KMEKCONJMGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB546310)
#define KMEKCONJMGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB546050)
#define KMEKCONJMGB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5462C0)
#define KMEKCONJMGB_TICK_OFFSET UNITYSDK_OFFSET(0xB546350)

inline static constexpr unsigned int KMEKCONJMGB_TypeDefinitionIndex = 58219;

	class KMEKCONJMGB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyCreateWorld* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCreateWorld* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCreateWorld*))((::PBYTE)hIl2Cpp + KMEKCONJMGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEKCONJMGB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEKCONJMGB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEKCONJMGB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEKCONJMGB_TICK_OFFSET))(this, a1);
		}

	};
