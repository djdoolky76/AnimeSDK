#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class ConstructorHandling : ::System::Int32
	{
		Default = 0,
		AllowNonPublicDefaultConstructor = 1,
	};
}
