#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	enum class ResourceLocation : ::System::Int32
	{
		Embedded = 1,
		ContainedInAnotherAssembly = 2,
		ContainedInManifestFile = 4,
	};
}
