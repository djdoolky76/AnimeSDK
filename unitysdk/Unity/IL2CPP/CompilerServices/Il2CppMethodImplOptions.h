#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::CompilerServices
{
	enum class Il2CppMethodImplOptions : ::System::Int32
	{
		ForceInlining = 1,
		ILForceInlining = 2,
		NoMerge = 4,
		ILForceRemove = 8,
	};
}
