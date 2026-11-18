#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ExtendedUnixData_Flags_TypeDefinitionIndex = 6867;

	enum class ExtendedUnixData_Flags : ::System::Byte
	{
		ModificationTime = 1,
		AccessTime = 2,
		CreateTime = 4,
	};
}
