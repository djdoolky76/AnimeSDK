#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMonsterHPTotalSeg; }
namespace RPG::GameCore { class TaskContext; }

#define NJNPNCABAEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A33C0)
#define NJNPNCABAEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7A33D0)
#define NJNPNCABAEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7A3410)
#define NJNPNCABAEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7A3650)
#define NJNPNCABAEN_TICK_OFFSET UNITYSDK_OFFSET(0x1A7A36A0)

inline static constexpr unsigned int NJNPNCABAEN_TypeDefinitionIndex = 57632;

	class NJNPNCABAEN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetMonsterHPTotalSeg* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHPTotalSeg* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHPTotalSeg*))((::PBYTE)hIl2Cpp + NJNPNCABAEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNPNCABAEN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNPNCABAEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNPNCABAEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJNPNCABAEN_TICK_OFFSET))(this, a1);
		}

	};
