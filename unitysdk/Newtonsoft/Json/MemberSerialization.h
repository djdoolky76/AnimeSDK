#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json
{
	enum class MemberSerialization : ::System::Int32
	{
		OptOut = 0,
		OptIn = 1,
		Fields = 2,
	};
}
