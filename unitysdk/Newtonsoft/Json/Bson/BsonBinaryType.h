#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Bson
{
	enum class BsonBinaryType : ::System::Byte
	{
		Binary = 0,
		Function = 1,
		BinaryOld = 2,
		UuidOld = 3,
		Uuid = 4,
		Md5 = 5,
		UserDefined = 128,
	};
}
