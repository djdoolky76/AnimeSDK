#pragma once
#include "unitysdk/unitysdk.h"
class JBELCFCEKAN;
namespace RPG::GameCore { class TaskContext; }

#define LKEANBEGFLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB72E5D0)
#define LKEANBEGFLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB72E600)
#define LKEANBEGFLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB72EC80)

inline static constexpr unsigned int LKEANBEGFLC_TypeDefinitionIndex = 55197;

	class LKEANBEGFLC
	{
	public:
		::System::Int32 DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JBELCFCEKAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JBELCFCEKAN*))((::PBYTE)hIl2Cpp + LKEANBEGFLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEANBEGFLC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEANBEGFLC_ONTASKRESET_OFFSET))(this);
		}

	};
