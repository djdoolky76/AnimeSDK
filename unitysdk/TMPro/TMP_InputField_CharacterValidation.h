#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	enum class TMP_InputField_CharacterValidation : ::System::Int32
	{
		None = 0,
		Digit = 1,
		Integer = 2,
		Decimal = 3,
		Alphanumeric = 4,
		Name = 5,
		Regex = 6,
		EmailAddress = 7,
		CustomValidator = 8,
	};
}
