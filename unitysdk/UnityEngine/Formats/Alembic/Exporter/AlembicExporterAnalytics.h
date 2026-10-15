#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Exporter/AlembicExporterAnalytics_AlembicExporterAnalyticsEvent.h"
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorderSettings; }

#define UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1F165820)
#define UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_SENDANALYTICS_OFFSET UNITYSDK_OFFSET(0x1F1647E0)

namespace UnityEngine::Formats::Alembic::Exporter
{
	class AlembicExporterAnalytics : public ::System::Object
	{
	public:
		// static const ::System::String* VendorKey; // 0x0
		// static const ::System::String* EventName; // 0x0
		// static const ::System::Object MAXEventsPerHour; // 0x0
		// static const ::System::Object MAXNumberOfElements; // 0x0
		static ::System::Void SendAnalytics(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_SENDANALYTICS_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Exporter::AlembicExporterAnalytics_AlembicExporterAnalyticsEvent CreateEvent(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a1)
		{
			return ((::UnityEngine::Formats::Alembic::Exporter::AlembicExporterAnalytics_AlembicExporterAnalyticsEvent(*)(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_CREATEEVENT_OFFSET))(a1);
		}

	};
}
