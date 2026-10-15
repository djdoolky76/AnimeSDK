#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROP_HINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF8190)

namespace RPG::Client::Prop
{
	class HintInfo : public ::System::Object
	{
	public:
		::System::UInt32 BasePointPropId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SubobjectName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HINTINFO_CTOR_OFFSET))(this);
		}

	};
}
