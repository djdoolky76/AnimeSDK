#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DestroyAllNPCMonsterInArea; }
namespace RPG::GameCore { class TaskContext; }

#define INNFAFAKGKH_CTOR_OFFSET UNITYSDK_OFFSET(0x164F8340)
#define INNFAFAKGKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164F8350)
#define INNFAFAKGKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164F8390)
#define INNFAFAKGKH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164F8700)
#define INNFAFAKGKH_TICK_OFFSET UNITYSDK_OFFSET(0x164F8750)

inline static constexpr unsigned int INNFAFAKGKH_TypeDefinitionIndex = 52732;

	class INNFAFAKGKH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DestroyAllNPCMonsterInArea* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*))((::PBYTE)hIl2Cpp + INNFAFAKGKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNFAFAKGKH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNFAFAKGKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNFAFAKGKH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INNFAFAKGKH_TICK_OFFSET))(this, a1);
		}

	};
