#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8FACB0)
#define RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FADD0)

namespace RPGTools::Timeline
{
	class FireNotifyWithIntArgBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* NotifyTypeName; // 0x20
		::System::String* IntArg; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FIRENOTIFYWITHINTARGBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
