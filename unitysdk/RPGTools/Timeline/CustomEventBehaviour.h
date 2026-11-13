#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1D8ED270)
#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1D8ED230)
#define RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8ED2B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CustomEventBehaviour_TypeDefinitionIndex = 49439;

	class CustomEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double Start; // 0x10
		::System::Double End; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUSTOMEVENTBEHAVIOUR_AHEEAFKFALM_OFFSET))(this);
		}

	};
}
