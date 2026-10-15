#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MazeBuff; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMazeBuffSelect; }
namespace System { class Object; }

#define GBJKLDNDHMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15946640)
#define GBJKLDNDHMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15946650)
#define GBJKLDNDHMD_GAOIMOJGOLN_OFFSET UNITYSDK_OFFSET(0x15946690)
#define GBJKLDNDHMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15946440)
#define GBJKLDNDHMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15946590)
#define GBJKLDNDHMD_POAAKJBMFKF_OFFSET UNITYSDK_OFFSET(0x159467A0)
#define GBJKLDNDHMD_TICK_OFFSET UNITYSDK_OFFSET(0x159465E0)

inline static constexpr unsigned int GBJKLDNDHMD_TypeDefinitionIndex = 58793;

	class GBJKLDNDHMD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TriggerMazeBuffSelect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMazeBuffSelect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMazeBuffSelect*))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_DISPOSE_OFFSET))(this);
		}

		::System::Void GAOIMOJGOLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_GAOIMOJGOLN_OFFSET))(this, a1);
		}

		::System::Void POAAKJBMFKF(::RPG::GameCore::MazeBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuff*))((::PBYTE)hIl2Cpp + GBJKLDNDHMD_POAAKJBMFKF_OFFSET))(this, a1);
		}

	};
