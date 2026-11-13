#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DNKAAIFEKNP_MissionResManagerReportType_TypeDefinitionIndex = 61270;

	enum class DNKAAIFEKNP_MissionResManagerReportType : ::System::Int32
	{
		MissionAdd = 1,
		MissionRemove = 2,
		ManualDelete = 3,
		AutoDelete = 4,
	};
