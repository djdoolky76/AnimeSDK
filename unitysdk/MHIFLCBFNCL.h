#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class EnableRandomTriggerAnimEvent; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define MHIFLCBFNCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EF7B0)
#define MHIFLCBFNCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1EF840)
#define MHIFLCBFNCL_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xC1EF930)
#define MHIFLCBFNCL_JIABAMDLBGA_OFFSET UNITYSDK_OFFSET(0xC1EFF50)
#define MHIFLCBFNCL_JPDIAIKIEDB_OFFSET UNITYSDK_OFFSET(0xC1EFCB0)
#define MHIFLCBFNCL_KNHPGLCMDLD_OFFSET UNITYSDK_OFFSET(0xC1EFDD0)
#define MHIFLCBFNCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1EFAD0)
#define MHIFLCBFNCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1EFA80)

inline static constexpr unsigned int MHIFLCBFNCL_TypeDefinitionIndex = 53892;

	class MHIFLCBFNCL
	{
	public:
		::KFELGAIGHAP* MPKAFEJFNKN; // 0x28
		::System::Int32 FBKENGIJJBL; // 0x30
		::System::Single PPPPGCCDNNE; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableRandomTriggerAnimEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableRandomTriggerAnimEvent*))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Void JPDIAIKIEDB(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_JPDIAIKIEDB_OFFSET))(this, a1);
		}

		::System::Void JIABAMDLBGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_JIABAMDLBGA_OFFSET))(this);
		}

		::System::Int32 KNHPGLCMDLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIFLCBFNCL_KNHPGLCMDLD_OFFSET))(this);
		}

	};
