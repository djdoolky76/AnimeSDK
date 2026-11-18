#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimeLinePlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE_MNMIKPNKPOI_OFFSET UNITYSDK_OFFSET(0x19B6AC60)
#define MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6AC50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PostProcessBehaviourBase_TypeDefinitionIndex = 61135;

	class PostProcessBehaviourBase : public ::MoleMole::Timeline::TimeLinePlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE__CTOR_OFFSET))(this);
		}

		::System::Void MNMIKPNKPOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSBEHAVIOURBASE_MNMIKPNKPOI_OFFSET))(this);
		}
	};
}
