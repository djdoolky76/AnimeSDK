#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetBossPluralityHP; }
namespace RPG::GameCore { class TaskContext; }

#define BMACAJHPDEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA81F10)
#define BMACAJHPDEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA81F20)
#define BMACAJHPDEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA81F60)
#define BMACAJHPDEB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA82040)
#define BMACAJHPDEB_TICK_OFFSET UNITYSDK_OFFSET(0xBA82090)

inline static constexpr unsigned int BMACAJHPDEB_TypeDefinitionIndex = 56395;

	class BMACAJHPDEB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetBossPluralityHP* OFKGLJOAMLD; // 0x20
		// static const ::System::Object PAEKJECBJHC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBossPluralityHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBossPluralityHP*))((::PBYTE)hIl2Cpp + BMACAJHPDEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACAJHPDEB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACAJHPDEB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMACAJHPDEB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMACAJHPDEB_TICK_OFFSET))(this, a1);
		}

	};
