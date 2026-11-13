#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSTARTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B6AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmStartInfo_TypeDefinitionIndex = 61450;

	class MusicRhythmStartInfo : public ::System::Object
	{
	public:
		::System::Int32 BeatCount; // 0x10
		::System::Single GoodInputTime; // 0x14
		::System::UInt32 TotalScore; // 0x18
		::System::Single MusicTotalTime; // 0x1C
		::System::UInt32 CountDown; // 0x20
		::System::UInt32 LevelId; // 0x24
		::System::Boolean IsTutorial; // 0x28
		::System::Boolean ShowCircle; // 0x29
		::System::Boolean LineVisible; // 0x2A
		::System::Boolean HintVisible; // 0x2B
		::System::Boolean IsPuMan; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single CircleOffset; // 0x30
		::System::Single BeatTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSTARTINFO_CTOR_OFFSET))(this);
		}

	};
}
