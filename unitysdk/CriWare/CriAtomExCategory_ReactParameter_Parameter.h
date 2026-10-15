#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactAisacModulationParameter.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactDuckerParameter.h"

namespace CriWare
{
	struct alignas(4) CriAtomExCategory_ReactParameter_Parameter
	{
		::CriWare::CriAtomExCategory_ReactDuckerParameter ducker; // 0x10
		::CriWare::CriAtomExCategory_ReactAisacModulationParameter aisacModulation; // 0x10
	};
}
