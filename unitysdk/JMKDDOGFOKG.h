#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OpenMarbleMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define JMKDDOGFOKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB262EE0)
#define JMKDDOGFOKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB263060)
#define JMKDDOGFOKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB262EF0)
#define JMKDDOGFOKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2630A0)
#define JMKDDOGFOKG_PKMCEDPEBOO_OFFSET UNITYSDK_OFFSET(0xB263150)
#define JMKDDOGFOKG_TICK_OFFSET UNITYSDK_OFFSET(0xB2630F0)
#define JMKDDOGFOKG___ONGAMEAREALOADED_B__5_0_OFFSET UNITYSDK_OFFSET(0xB2632F0)
#define JMKDDOGFOKG___ONGAMEAREALOADED_B__5_1_OFFSET UNITYSDK_OFFSET(0xB263380)

inline static constexpr unsigned int JMKDDOGFOKG_TypeDefinitionIndex = 52308;

	class JMKDDOGFOKG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OpenMarbleMainPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenMarbleMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenMarbleMainPage*))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_TICK_OFFSET))(this, a1);
		}

		::System::Void PKMCEDPEBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG_PKMCEDPEBOO_OFFSET))(this);
		}

		::System::Void __OnGameAreaLoaded_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG___ONGAMEAREALOADED_B__5_0_OFFSET))(this);
		}

		::System::Void __OnGameAreaLoaded_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKDDOGFOKG___ONGAMEAREALOADED_B__5_1_OFFSET))(this);
		}

	};
