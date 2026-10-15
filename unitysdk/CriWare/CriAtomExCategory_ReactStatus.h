#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomExCategory_ReactStatus : ::System::Int32
	{
		Stop = 0,
		FadeOut = 1,
		Hold = 2,
		FadeIn = 3,
		Error = 4,
	};
}
