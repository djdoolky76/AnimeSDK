#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	enum class RijndaelManagedTransformMode : ::System::Int32
	{
		Encrypt = 0,
		Decrypt = 1,
	};
}
