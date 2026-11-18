#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::TimelineComponent { class TimelineBranchGroup; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A0C1D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0C210)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__GETBRANCHPLAYABLEDIRECTORS_B__11_0_OFFSET UNITYSDK_OFFSET(0x13A0C220)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineBranchManager___c_TypeDefinitionIndex = 88401;

	class RuntimeTimelineBranchManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineBranchManager___c_TypeDefinitionIndex)->GetStaticField(0x44C70);
		}
		static ::System::Func_2<::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*, ::UnityEngine::Playables::PlayableDirector*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*, ::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineBranchManager___c_TypeDefinitionIndex)->GetStaticField(0x44C78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableDirector* _GetBranchPlayableDirectors_b__11_0(::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup* item)
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::TimelineBranchGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEBRANCHMANAGER___C__GETBRANCHPLAYABLEDIRECTORS_B__11_0_OFFSET))(this, item);
		}
	};
}
