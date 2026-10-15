#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }

#define RPG_CLIENT_PROP_ROTATESELECTPARAMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD9BEF0)

namespace RPG::Client::Prop
{
	class RotateSelectParamData : public ::System::Object
	{
	public:
		::System::String* FragmentUniqueName; // 0x10
		::RPG::GameCore::OptionTriggerInfo* RotateInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATESELECTPARAMDATA_CTOR_OFFSET))(this);
		}

	};
}
