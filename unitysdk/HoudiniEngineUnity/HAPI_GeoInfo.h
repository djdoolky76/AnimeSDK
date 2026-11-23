#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A23355AA7AA8D4D2.h"
#include "unitysdk/FA78B0257AA80CDE/BE942843D6F43D6A.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_GEOINFO_GETGROUPCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0x3808A60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_GeoInfo_TypeDefinitionIndex = 17880;

	struct alignas(4) HAPI_GeoInfo
	{
		::FA78B0257AA80CDE::BE942843D6F43D6A type; // 0x10
		::System::Int32 nameSH; // 0x14
		::System::Int32 nodeId; // 0x18
		::System::Boolean isEditable; // 0x1C
		::System::Boolean isTemplated; // 0x1D
		::System::Boolean isDisplayGeo; // 0x1E
		::System::Boolean hasGeoChanged; // 0x1F
		::System::Boolean hasMaterialChanged; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 pointGroupCount; // 0x24
		::System::Int32 primitiveGroupCount; // 0x28
		::System::Int32 edgeGroupCount; // 0x2C
		::System::Int32 partCount; // 0x30

		::System::Int32 getGroupCountByType(::FA78B0257AA80CDE::A23355AA7AA8D4D2 A288CB28FC2A6DA3)
		{
			return ((::System::Int32(*)(::PVOID, ::FA78B0257AA80CDE::A23355AA7AA8D4D2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_GEOINFO_GETGROUPCOUNTBYTYPE_OFFSET))(this, A288CB28FC2A6DA3);
		}
	};
}
