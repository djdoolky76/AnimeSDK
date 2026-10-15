#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NCLHHBEOOGJ;
namespace RPG::GameCore { class TaskContext; }

#define KHNMAKMEIHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB408FD0)
#define KHNMAKMEIHO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB408FE0)
#define KHNMAKMEIHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4090B0)
#define KHNMAKMEIHO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB409060)
#define KHNMAKMEIHO_TICK_OFFSET UNITYSDK_OFFSET(0xB409210)

inline static constexpr unsigned int KHNMAKMEIHO_TypeDefinitionIndex = 52615;

	class KHNMAKMEIHO : public ::GELIALJDFBL
	{
	public:
		::NCLHHBEOOGJ* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NCLHHBEOOGJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NCLHHBEOOGJ*))((::PBYTE)hIl2Cpp + KHNMAKMEIHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNMAKMEIHO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNMAKMEIHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNMAKMEIHO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHNMAKMEIHO_TICK_OFFSET))(this, a1);
		}

	};
