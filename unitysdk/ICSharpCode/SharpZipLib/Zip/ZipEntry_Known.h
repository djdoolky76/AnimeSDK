#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntry_Known_TypeDefinitionIndex = 6860;

	enum class ZipEntry_Known : ::System::Byte
	{
		None = 0,
		Size = 1,
		CompressedSize = 2,
		Crc = 4,
		Time = 8,
		ExternalAttributes = 16,
	};
}
