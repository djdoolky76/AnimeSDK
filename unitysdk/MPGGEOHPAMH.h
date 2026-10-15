#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonopolyCheckShouldSettle; }
namespace RPG::GameCore { class TaskContext; }

#define MPGGEOHPAMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA37C50)
#define MPGGEOHPAMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA37F70)
#define MPGGEOHPAMH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA37D50)
#define MPGGEOHPAMH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA37F20)
#define MPGGEOHPAMH_TICK_OFFSET UNITYSDK_OFFSET(0xBA380E0)

inline static constexpr unsigned int MPGGEOHPAMH_TypeDefinitionIndex = 58217;

	class MPGGEOHPAMH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyCheckShouldSettle* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* IJBFOGOBMLE; // 0x28
		::KFELGAIGHAP* APPJBNPGGMI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckShouldSettle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckShouldSettle*))((::PBYTE)hIl2Cpp + MPGGEOHPAMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGGEOHPAMH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGGEOHPAMH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGGEOHPAMH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPGGEOHPAMH_TICK_OFFSET))(this, a1);
		}

	};
