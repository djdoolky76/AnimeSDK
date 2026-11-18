#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CINEMASINGLEBEATMAPCONFIG_BEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x11E70010)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleBeatMapConfig_BeatMap_TypeDefinitionIndex = 85808;

	class CinemaSingleBeatMapConfig_BeatMap : public ::System::Object
	{
	public:
		::System::Single bpm; // 0x10
		::System::Single time; // 0x14
		::System::Collections::Generic::List_1<::System::Object*>* beatItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMASINGLEBEATMAPCONFIG_BEATMAP__CTOR_OFFSET))(this);
		}
	};
}
