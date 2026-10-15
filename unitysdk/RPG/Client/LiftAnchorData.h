#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LIFTANCHORDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD392130)

namespace RPG::Client
{
	class LiftAnchorData : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIFTANCHORDATA_CTOR_OFFSET))(this);
		}

	};
}
