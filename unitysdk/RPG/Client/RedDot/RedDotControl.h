#pragma once
#include "unitysdk/unitysdk.h"
class CHLKFLECHIP;
class HIKAAGHELPH;

#define RPG_CLIENT_REDDOT_REDDOTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE62F00)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDE62820)

namespace RPG::Client::RedDot
{
	class RedDotControl
	{
	public:
		// static const ::System::String* RootPrefabPath; // 0x0
		// static const ::System::String* NormalPrefabPath; // 0x0
		// static const ::System::String* NewPrefabPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
