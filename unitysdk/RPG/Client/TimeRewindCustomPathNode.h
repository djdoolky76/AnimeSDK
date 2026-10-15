#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindCustomPathNodeType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_TIMEREWINDCUSTOMPATHNODE_CTOR_OFFSET UNITYSDK_OFFSET(0xE27C4D0)

namespace RPG::Client
{
	class TimeRewindCustomPathNode : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::RPG::Client::TimeRewindCustomPathNodeType NodeType; // 0x18
		::System::Boolean EnableRedo; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCUSTOMPATHNODE_CTOR_OFFSET))(this);
		}

	};
}
