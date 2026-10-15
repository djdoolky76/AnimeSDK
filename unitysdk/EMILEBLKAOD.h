#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LoopSceneMoveObject; }
namespace RPG::GameCore { class SetLoopMoveObjectSpeed; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }

#define EMILEBLKAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1553BD30)
#define EMILEBLKAOD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1553BD40)
#define EMILEBLKAOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1553BD80)
#define EMILEBLKAOD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1553BFD0)
#define EMILEBLKAOD_TICK_OFFSET UNITYSDK_OFFSET(0x1553C020)

	class EMILEBLKAOD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetLoopMoveObjectSpeed* OFKGLJOAMLD; // 0x18
		::UnityEngine::AnimationCurve* BKHPEABMAOE; // 0x20
		::RPG::Client::LoopSceneMoveObject* HGDAENIAFKC; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Single BOBKPMMHHAM; // 0x38
		::System::Single PGMIOKKLHIE; // 0x3C
		::System::Boolean DLNNFPKMHLO; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLoopMoveObjectSpeed*))((::PBYTE)hIl2Cpp + EMILEBLKAOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILEBLKAOD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILEBLKAOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILEBLKAOD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMILEBLKAOD_TICK_OFFSET))(this, a1);
		}

	};
