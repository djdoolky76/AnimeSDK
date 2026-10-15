#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C2910)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopBodyControlData_TypeDefinitionIndex = 47944;

	class CharacterStopBodyControlData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* CurveName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLDATA_CTOR_OFFSET))(this);
		}

	};
}
