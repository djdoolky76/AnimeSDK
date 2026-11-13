#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMHINTGROUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AE350)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmHintGroupInfo_TypeDefinitionIndex = 61453;

	class MusicRhythmHintGroupInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* InputBeats; // 0x10
		::System::Int32 HintIndex; // 0x18
		::System::Int32 GroupIndex; // 0x1C
		::System::Single StartTime; // 0x20
		::System::Boolean HasInput; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 NoteIndex; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMHINTGROUPINFO_CTOR_OFFSET))(this);
		}

	};
}
