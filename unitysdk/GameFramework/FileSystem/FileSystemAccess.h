#pragma once
#include "unitysdk/unitysdk.h"

namespace GameFramework::FileSystem
{
	inline static constexpr unsigned int FileSystemAccess_TypeDefinitionIndex = 43859;

	enum class FileSystemAccess : ::System::Byte
	{
		Unspecified = 0,
		Read = 1,
		Write = 2,
		ReadWrite = 3,
	};
}
