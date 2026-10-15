#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetTeamEntityFaceDir; }
namespace RPG::GameCore { class TaskContext; }

#define BPAOLINBFFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC19A1C0)
#define BPAOLINBFFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19A1D0)
#define BPAOLINBFFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC19A210)
#define BPAOLINBFFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC19A560)
#define BPAOLINBFFB_TICK_OFFSET UNITYSDK_OFFSET(0xC19A5B0)

inline static constexpr unsigned int BPAOLINBFFB_TypeDefinitionIndex = 56384;

	class BPAOLINBFFB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ResetTeamEntityFaceDir* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTeamEntityFaceDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTeamEntityFaceDir*))((::PBYTE)hIl2Cpp + BPAOLINBFFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAOLINBFFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAOLINBFFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAOLINBFFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPAOLINBFFB_TICK_OFFSET))(this, a1);
		}

	};
