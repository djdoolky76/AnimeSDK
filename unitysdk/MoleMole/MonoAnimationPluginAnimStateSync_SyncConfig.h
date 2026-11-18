#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONOANIMATIONPLUGINANIMSTATESYNC_SYNCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139F28D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginAnimStateSync_SyncConfig_TypeDefinitionIndex = 82601;

	class MonoAnimationPluginAnimStateSync_SyncConfig : public ::System::Object
	{
	public:
		::System::String* animName; // 0x10
		::System::Boolean enableAnimMapping; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* sourceAnimName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINANIMSTATESYNC_SYNCCONFIG__CTOR_OFFSET))(this);
		}
	};
}
