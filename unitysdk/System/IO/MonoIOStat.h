#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAttributes.h"

namespace System::IO
{
	struct alignas(4) MonoIOStat
	{
		::System::IO::FileAttributes fileAttributes; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 Length; // 0x18
		::System::Int64 CreationTime; // 0x20
		::System::Int64 LastAccessTime; // 0x28
		::System::Int64 LastWriteTime; // 0x30
	};
}
