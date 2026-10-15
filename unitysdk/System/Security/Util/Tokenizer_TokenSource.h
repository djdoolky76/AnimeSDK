#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Util
{
	enum class Tokenizer_TokenSource : ::System::Int32
	{
		UnicodeByteArray = 0,
		UTF8ByteArray = 1,
		ASCIIByteArray = 2,
		CharArray = 3,
		String = 4,
		NestedStrings = 5,
		Other = 6,
	};
}
