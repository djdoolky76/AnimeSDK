#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYJUDGEENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0AD40)

namespace RPG::Client::OpenWorld
{
	class PVSRuntimeReplayJudgeEntry : public ::System::Object
	{
	public:
		::System::String* stage; // 0x10
		::System::Boolean pass; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* evidence; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYJUDGEENTRY_CTOR_OFFSET))(this);
		}

	};
}
