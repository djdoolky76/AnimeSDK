#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class PS_IssuerID : ::System::Int32
	{
		Invalid = -1,
		Development = 1,
		Certification = 8,
		Live = 256,
	};
}
