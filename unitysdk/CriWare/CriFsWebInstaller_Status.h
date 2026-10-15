#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriFsWebInstaller_Status : ::System::Int32
	{
		Stop = 0,
		Busy = 1,
		Complete = 2,
		Error = 3,
	};
}
