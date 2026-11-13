#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayChallengeTargetAnimation; }
namespace RPG::GameCore { class TaskContext; }

#define OOFKBFKHCEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1969BFF0)
#define OOFKBFKHCEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1969C000)
#define OOFKBFKHCEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1969C040)
#define OOFKBFKHCEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1969C0A0)
#define OOFKBFKHCEC_TICK_OFFSET UNITYSDK_OFFSET(0x1969C0F0)

inline static constexpr unsigned int OOFKBFKHCEC_TypeDefinitionIndex = 54257;

	class OOFKBFKHCEC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayChallengeTargetAnimation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayChallengeTargetAnimation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayChallengeTargetAnimation*))((::PBYTE)hIl2Cpp + OOFKBFKHCEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFKBFKHCEC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFKBFKHCEC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFKBFKHCEC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOFKBFKHCEC_TICK_OFFSET))(this, a1);
		}

	};
