#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Animations { class ParentConstraint; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARENTCONSTRAINTSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14BD89A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARENTCONSTRAINTSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD8920)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int ParentConstraintSyncInfo_TypeDefinitionIndex = 46413;

	class ParentConstraintSyncInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARENTCONSTRAINTSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Animations::ParentConstraint* component)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::ParentConstraint*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_PARENTCONSTRAINTSYNCINFO__CTOR_1_OFFSET))(this, component);
		}
	};
}
