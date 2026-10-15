#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EFFECTFADESYNCSET_CTOR_OFFSET UNITYSDK_OFFSET(0xCD14900)

namespace RPG::Client
{
	class EffectFadeSyncSet : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Boolean IsNeedFadeout; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTFADESYNCSET_CTOR_OFFSET))(this);
		}

	};
}
