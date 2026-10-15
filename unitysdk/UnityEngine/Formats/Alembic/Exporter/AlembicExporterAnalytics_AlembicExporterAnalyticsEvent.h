#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Exporter
{
	struct alignas(4) AlembicExporterAnalytics_AlembicExporterAnalyticsEvent
	{
		::System::Boolean capture_mesh; // 0x10
		::System::Boolean skinned_mesh; // 0x11
		::System::Boolean camera; // 0x12
		::System::Boolean static_mesh_renderers; // 0x13
	};
}
