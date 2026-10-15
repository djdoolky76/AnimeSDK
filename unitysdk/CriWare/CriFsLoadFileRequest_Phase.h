#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriFsLoadFileRequest_Phase : ::System::Int32
	{
		Stop = 0,
		Bind = 1,
		Load = 2,
		Done = 3,
		Error = 4,
	};
}
