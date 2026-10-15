#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

	struct alignas(8) DFIFIHGHDFG_DownloadMetadata
	{
		::System::UInt32 version; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* platform; // 0x18
		::Il2CppArray<::System::String*>* resourceBranch; // 0x20
		::System::String* api; // 0x28
		::System::Int32 minimalReportCount; // 0x30
	};
