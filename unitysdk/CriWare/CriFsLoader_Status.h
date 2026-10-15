#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriFsLoader_Status : ::System::Int32
	{
		Stop = 0,
		Loading = 1,
		Complete = 2,
		Error = 3,
	};
}
