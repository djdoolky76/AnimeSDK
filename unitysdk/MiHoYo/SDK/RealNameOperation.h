#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class RealNameOperation : ::System::Int32
	{
		None = 0,
		BindRealname = 1,
		ModifyRealname = 2,
		BindRealperson = 3,
		VerifyRealperson = 4,
	};
}
