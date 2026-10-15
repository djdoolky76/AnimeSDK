#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_REPLAYUPLOADCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDEB95C0)

namespace RPG::Client
{
	class ReplayUploadContent : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::UInt32 battle_id; // 0x14
		::System::UInt32 stage_id; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* upload_time; // 0x20
		::System::String* data_version; // 0x28
		::System::String* region; // 0x30
		::System::String* reason; // 0x38
		::System::String* custom_data; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYUPLOADCONTENT_CTOR_OFFSET))(this);
		}

	};
}
