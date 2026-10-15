#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/TransitionType.h"
namespace System { class String; }

#define MIHOYOEMOTION_SEQUENCEBAKEDATA_BAKEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BFC40)

namespace miHoYoEmotion
{
	class SequenceBakeData_BakeData : public ::System::Object
	{
	public:
		::System::Single length; // 0x10
		::miHoYoEmotion::TransitionType transitionType; // 0x14
		::System::String* lastShape; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_SEQUENCEBAKEDATA_BAKEDATA_CTOR_OFFSET))(this);
		}

	};
}
