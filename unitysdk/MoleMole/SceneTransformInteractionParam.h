#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InteractionSpecialParamBase.h"

namespace System { class String; }

#define MOLEMOLE_SCENETRANSFORMINTERACTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1249DA90)

namespace MoleMole
{
	inline static constexpr unsigned int SceneTransformInteractionParam_TypeDefinitionIndex = 86054;

	class SceneTransformInteractionParam : public ::MoleMole::InteractionSpecialParamBase
	{
	public:
		// static const ::System::String* DefaultAudioEventForward; // 0x0
		// static const ::System::String* DefaultAudioEventReverse; // 0x0
		// static const ::System::String* DefaultAudioEventExplosion; // 0x0
		// static const ::System::String* DefaultIcon; // 0x0
		::System::String* AudioEventForward; // 0x10
		::System::String* AudioEventReverse; // 0x18
		::System::String* AudioEventExplosion; // 0x20
		::System::String* Icon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENETRANSFORMINTERACTIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
