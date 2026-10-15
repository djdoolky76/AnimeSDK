#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CakeRaceWaitDragProp; }
namespace RPG::GameCore { class TaskContext; }

#define IEDFPJOECNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE3AF0)
#define IEDFPJOECNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EE3B00)
#define IEDFPJOECNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EE3CE0)
#define IEDFPJOECNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15EE3F50)
#define IEDFPJOECNE_TICK_OFFSET UNITYSDK_OFFSET(0x15EE3FA0)
#define IEDFPJOECNE__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x15EE4000)

inline static constexpr unsigned int IEDFPJOECNE_TypeDefinitionIndex = 52626;

	class IEDFPJOECNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CakeRaceWaitDragProp* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitDragProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitDragProp*))((::PBYTE)hIl2Cpp + IEDFPJOECNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFPJOECNE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFPJOECNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFPJOECNE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEDFPJOECNE_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDFPJOECNE__ONTASKBEGIN_B__4_0_OFFSET))(this);
		}

	};
