#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGININITSTATEBYTARGETNORMALIZEDTIME_EFFECTSTATESYNCSET_CTOR_OFFSET UNITYSDK_OFFSET(0xD8013B0)

namespace RPG::Client
{
	class MonoEffectPluginInitStateByTargetNormalizedTime_EffectStateSyncSet : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Int32 EffectLayer; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* EffectState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGININITSTATEBYTARGETNORMALIZEDTIME_EFFECTSTATESYNCSET_CTOR_OFFSET))(this);
		}

	};
}
