#pragma once
#include "unitysdk/unitysdk.h"

namespace GameFramework::FileSystem
{
	enum class FileSystemAccess : ::System::Byte
	{
		Unspecified = 0,
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
