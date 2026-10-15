#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class JsonReader_State : ::System::Int32
	{
		Start = 0,
		Complete = 1,
		Property = 2,
		ObjectStart = 3,
		Object = 4,
		ArrayStart = 5,
		Array = 6,
		Closed = 7,
		PostValue = 8,
		ConstructorStart = 9,
		Constructor = 10,
		Error = 11,
		Finished = 12,
	};
}
