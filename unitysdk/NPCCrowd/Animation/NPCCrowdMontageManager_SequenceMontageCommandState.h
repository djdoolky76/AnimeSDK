#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCEMONTAGECOMMANDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x137AAE70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_SequenceMontageCommandState_TypeDefinitionIndex = 39851;

	class NPCCrowdMontageManager_SequenceMontageCommandState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* layerStates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEMANAGER_SEQUENCEMONTAGECOMMANDSTATE__CTOR_OFFSET))(this);
		}
	};
}
