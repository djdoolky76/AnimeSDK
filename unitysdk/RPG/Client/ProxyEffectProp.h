#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROXYEFFECTPROP_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFC7B0)

namespace RPG::Client
{
	class ProxyEffectProp : public ::System::Object
	{
	public:
		::System::UInt32 PropConfigID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EffectName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROXYEFFECTPROP_CTOR_OFFSET))(this);
		}

	};
}
