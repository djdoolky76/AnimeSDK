#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayChallengeTargetAnimation; }
namespace RPG::GameCore { class TaskContext; }

#define OOFKBFKHCEC_CTOR_OFFSET UNITYSDK_OFFSET(0xC87CE70)
#define OOFKBFKHCEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC87CE80)
#define OOFKBFKHCEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC87CEC0)
#define OOFKBFKHCEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC87CF20)
#define OOFKBFKHCEC_TICK_OFFSET UNITYSDK_OFFSET(0xC87CF70)

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
