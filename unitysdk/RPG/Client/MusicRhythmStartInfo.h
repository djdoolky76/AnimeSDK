#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSICRHYTHMSTARTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE3ADE90)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmStartInfo_TypeDefinitionIndex = 61450;

	class MusicRhythmStartInfo : public ::System::Object
	{
	public:
		::System::UInt32 LevelId; // 0x10
		::System::Single GoodInputTime; // 0x14
		::System::Single BeatTime; // 0x18
		::System::UInt32 TotalScore; // 0x1C
		::System::Single MusicTotalTime; // 0x20
		::System::Single CircleOffset; // 0x24
		::System::Boolean IsPuMan; // 0x28
		::System::Boolean LineVisible; // 0x29
		::System::Boolean HintVisible; // 0x2A
		::System::Boolean IsTutorial; // 0x2B
		::System::Boolean ShowCircle; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 CountDown; // 0x30
		::System::Int32 BeatCount; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMSTARTINFO_CTOR_OFFSET))(this);
		}

	};
}
