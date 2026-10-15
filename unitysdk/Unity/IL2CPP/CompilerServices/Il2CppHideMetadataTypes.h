#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	enum class Il2CppHideMetadataTypes : ::System::Int32
	{
		None = 0,
		Standard = 1,
		Methods = 2,
		Properties = 4,
		Fields = 8,
		Events = 16,
		All = 31,
	};
}
