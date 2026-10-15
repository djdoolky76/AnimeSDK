#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	enum class TMP_InputField_ContentType : ::System::Int32
	{
		Standard = 0,
		Autocorrected = 1,
		IntegerNumber = 2,
		DecimalNumber = 3,
		Alphanumeric = 4,
		Name = 5,
		EmailAddress = 6,
		Password = 7,
		Pin = 8,
		Custom = 9,
	};
}
