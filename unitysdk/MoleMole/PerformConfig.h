#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_PERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x119494B0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformConfig_TypeDefinitionIndex = 40331;

	class PerformConfig : public ::System::Object
	{
	public:
		::System::String* CameraProcess; // 0x10
		::System::String* Anchor; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Int32 AnimatorKey; // 0x24
		::System::Single delayColliderTime; // 0x28
		::System::Single PosStartDelayTime; // 0x2C
		::System::Single delayUIShowTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
