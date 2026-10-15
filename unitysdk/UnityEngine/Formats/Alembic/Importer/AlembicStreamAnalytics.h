#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMANALYTICS_SENDANALYTICS_OFFSET UNITYSDK_OFFSET(0x1F176330)

namespace UnityEngine::Formats::Alembic::Importer
{
	class AlembicStreamAnalytics : public ::System::Object
	{
	public:
		// static const ::System::String* VendorKey; // 0x0
		// static const ::System::String* EventName; // 0x0
		// static const ::System::Object MAXEventsPerHour; // 0x0
		// static const ::System::Object MAXNumberOfElements; // 0x0
		static ::System::Void SendAnalytics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMANALYTICS_SENDANALYTICS_OFFSET))();
		}

	};
}
