#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetLoadingStratageType; }
namespace RPG::GameCore { class TaskContext; }

#define JICFALILJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EC900)
#define JICFALILJLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1EC910)
#define JICFALILJLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1EC950)
#define JICFALILJLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1ECA90)
#define JICFALILJLO_TICK_OFFSET UNITYSDK_OFFSET(0xB1ECAE0)

	class JICFALILJLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetLoadingStratageType* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoadingStratageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + JICFALILJLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICFALILJLO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICFALILJLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICFALILJLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JICFALILJLO_TICK_OFFSET))(this, a1);
		}

	};
