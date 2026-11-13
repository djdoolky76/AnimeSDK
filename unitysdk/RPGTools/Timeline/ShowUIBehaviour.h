#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1DA1B1E0)
#define RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1B250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowUIBehaviour_TypeDefinitionIndex = 49449;

	class ShowUIBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* UIName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWUIBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

	};
}
