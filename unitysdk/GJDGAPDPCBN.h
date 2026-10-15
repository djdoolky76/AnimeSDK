#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvEntityFaceToPoint; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GJDGAPDPCBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A5D4E0)
#define GJDGAPDPCBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A5D4F0)
#define GJDGAPDPCBN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15A5DDF0)
#define GJDGAPDPCBN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15A5E0A0)
#define GJDGAPDPCBN_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15A5DE00)
#define GJDGAPDPCBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A5D590)
#define GJDGAPDPCBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A5D540)
#define GJDGAPDPCBN_OODICDMNFGF_OFFSET UNITYSDK_OFFSET(0x15A5D840)
#define GJDGAPDPCBN_TICK_OFFSET UNITYSDK_OFFSET(0x15A5DCC0)

	class GJDGAPDPCBN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::RPG::GameCore::AdvEntityFaceToPoint* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityFaceToPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityFaceToPoint*))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean OODICDMNFGF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GJDGAPDPCBN_OODICDMNFGF_OFFSET))(this, a1);
		}

	};
