#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Serialization
{
	enum class JsonSerializerInternalReader_PropertyPresence : ::System::Int32
	{
		None = 0,
		Null = 1,
		Value = 2,
	};
}
