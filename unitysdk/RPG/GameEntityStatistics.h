#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMEENTITYSTATISTICS_CTOR_OFFSET UNITYSDK_OFFSET(0xE8790E0)
#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET UNITYSDK_OFFSET(0xE879090)
#define RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET UNITYSDK_OFFSET(0xE879040)

namespace RPG
{
	class GameEntityStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS_CTOR_OFFSET))(this);
		}

		static ::System::String* ExportFrameEntityStatisticsDataJson()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYSTATISTICSDATAJSON_OFFSET))();
		}

		static ::System::String* ExportFrameEntityRefAssetDataJson()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMEENTITYSTATISTICS_EXPORTFRAMEENTITYREFASSETDATAJSON_OFFSET))();
		}

	};
}
