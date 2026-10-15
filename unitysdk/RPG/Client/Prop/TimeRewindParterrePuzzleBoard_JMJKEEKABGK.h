#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_JMJKEEKABGK_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC8A10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleBoard_JMJKEEKABGK_TypeDefinitionIndex = 78909;

	class TimeRewindParterrePuzzleBoard_JMJKEEKABGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AKGGPKLCEFE; // 0x10
		::System::Boolean PGGCOLJAACF; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 HNKPCCEHCKK; // 0x1C
		::System::UInt32 KMABOAAIGDM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_JMJKEEKABGK_CTOR_OFFSET))(this);
		}

	};
}
