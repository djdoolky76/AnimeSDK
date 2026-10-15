#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class MetadataPropertyHandling : ::System::Int32
	{
		Default = 0,
		ReadAhead = 1,
		Ignore = 2,
	};
}
