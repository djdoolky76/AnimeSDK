#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLLAMAMOIMK_CHPJHELNIIM;
class HPCMMFHMAEK;

#define FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONUTILS_GETEROSIONTEMPLATEBYDONJONDATA_OFFSET UNITYSDK_OFFSET(0x15CCD790)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorErosionUtils_TypeDefinitionIndex = 59021;

	class FloorErosionUtils : public ::System::Object
	{
	public:
		static ::HPCMMFHMAEK* GetErosionTemplateByDonjonData(::GLLAMAMOIMK_CHPJHELNIIM* donjonData)
		{
			return ((::HPCMMFHMAEK*(*)(::GLLAMAMOIMK_CHPJHELNIIM*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOOREROSIONUTILS_GETEROSIONTEMPLATEBYDONJONDATA_OFFSET))(donjonData);
		}
	};
}
